// Mini c++ compiler

// Lexer completed!✔️
// Parser completed!✔️
// now working on linker🔜

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

struct Token
{
    int tag;
    string lexeme;
    Token(int t) : tag(t) {}
    Token(int t, string l) : tag(t), lexeme(l) {}
    string repr()
    {
        return "<" + type() + ":" + lexeme + ">";
    }
    string type()
    {
        switch (tag)
        {
        case WORD:
            return "word";
        case SIGN:
            return "sign";
        case INT:
            return "int";
        case TYPENAME:
            return "T";
        case PRINT:
            return "kw";
        default:
            return "?";
        }
    }

    enum
    {
        WORD,
        SIGN,
        INT,
        TYPENAME,
        PRINT
    };
};

class Lexer
{
private:
    string target;
    unsigned int pos = 0, line = 1, lpos = 0;

    list<Token> reserved_list;

    void reserve(int tag, string lexeme)
    {
        reserved_list.push_back(Token(tag, lexeme));
    }

    Token *check_reserved(Token *token)
    {
        for (auto iter : reserved_list)
            if (iter.lexeme == token->lexeme)
                token->tag = iter.tag;
        return token;
    }

    unsigned int next_pos()
    {
        lpos++;
        if (target[++pos] == '\n')
        {
            line++;
            lpos = 0;
        }
        return pos - 1;
    }

    Token *scan_word()
    {
        Token *result = new Token(Token::WORD);

        while (pos < target.size() &&
            isalnum(target[pos]))
            result->lexeme += target[next_pos()];

        return check_reserved(result);
    }

    Token *scan_number()
    {
        Token *result = new Token(Token::INT);

        while (pos < target.size() &&
            isdigit(target[pos]))
            result->lexeme += target[next_pos()];

        return result;
    }

    Token *scan_sign()
    {
        Token *result = new Token(Token::SIGN);

        result->lexeme += target[next_pos()];

        return result;
    }

public:
    Lexer(string t) : target(t)
    {
        reserve(Token::TYPENAME, "int");
        reserve(Token::TYPENAME, "bool");
        reserve(Token::TYPENAME, "string");
        reserve(Token::PRINT, "print");
    }

    string get_curr_pos()
    {
        return to_string(line) + ":" + to_string(lpos);
    }

    Token *scan_next()
    {
        if (pos >= target.size())
            return nullptr;

        if (iswspace(target[pos]))
        {
            next_pos();
            return scan_next();
        }

        if (isalpha(target[pos]))
            return scan_word();

        if (isdigit(target[pos]))
            return scan_number();

        return scan_sign();
    }

    list<Token> scan()
    {
        list<Token> result;
        Token *token = scan_next();

        while (token != nullptr)
        {
            result.push_back(*token);
            token = scan_next();
        }

        return result;
    }
};

// =====================================
// =====================================
// =====================================

struct Production
{
    string name;
    vector<Production> terminals;
    Production(string n) : name(n) {}
    Production(string n, string t) : name(n)
    {
        list<Token> tokens = Lexer(t).scan();
        for (auto tok : tokens)
            terminals.push_back(tok.lexeme);
    }
    Production(string n, Production p) : name(n)
    {
        terminals.push_back(p);
    }

    string repr(string off = "")
    {
        string result = off + name;

        if (!terminals.empty())
        {
            result += " {\n";

            for (auto iter = terminals.begin();
                iter != terminals.end();
                iter++)
                result += iter->repr(off + "| ") + "\n";
            result += off + "}";
        }
        return result;
    }
};

// =====================================

class Parser
{
private:
    Lexer lexer;
    Token *curr_tok;
    string error_msg = "";

    void next_tok()
    {
        curr_tok = lexer.scan_next();
    }

    void error(string msg)
    {
        error_msg += "At " + lexer.get_curr_pos() + " " + msg + "\n\n";
    }

    bool curr_is_num()
    {
        return curr_tok->tag == Token::INT;
    };
    bool curr_is_id()
    {
        return curr_tok->tag == Token::WORD;
    }
    bool curr_is_type()
    {
        return curr_tok->tag == Token::TYPENAME;
    }
    bool curr_is(string lex)
    {
        return curr_tok->lexeme == lex;
    }

    Production parse_raw_data()
    { // !
        // raw -> num | id | func_call |
        //        ( expr )
        Production result(curr_tok->lexeme);
        if (curr_is("("))
        {
            next_tok();
            result = parse_expr();

            if (!curr_is(")"))
                error("expected ')' after expression");
            else
                next_tok();
        }
        else
            next_tok();
        return result;
    }

    Production parse_term(Production
        first = Production("error"))
    {
        if (first.name == "error")
            first = parse_raw_data();
        // [<3> + <5>] - 8
        // 4 * 5 + 20
        string operation;
        if (curr_is("*"))
            operation = "mul";
        else if (curr_is("/"))
            operation = "div";
        else
            return first;
        next_tok();

        Production result(operation);
        result.terminals = {
            first,
            parse_raw_data()};
        return parse_term(result);
    }

    Production parse_num_expr(Production
        first = Production("error"))
    {
        if (first.name == "error")
            first = parse_term();
        // [<3> + <5>] - 8
        // 4 * 5 + 20
        string operation;
        if (curr_is("+"))
            operation = "sum";
        else if (curr_is("-"))
            operation = "sub";
        else
            return first;
        next_tok();

        Production result(operation);
        result.terminals = {
            first,
            parse_term(parse_raw_data())};
        return parse_num_expr(result);
    }

    Production parse_expr(Production
        first = Production("error"))
    {
        if (first.name == "error")
            first = parse_num_expr();
        if (curr_is("="))
        {
            next_tok();
            Production result("assign_expr");
            result.terminals = {
                first,
                parse_expr()};
            return result;
        }
        else
            return first;
    }

    Production parse_decl()
    {
        // decl -> typename id ;
        string data_t = curr_tok->lexeme;
        next_tok();

        if (!curr_is_id())
        {
            error("expected id in declaration");
            return Production("error");
        }

        string data_id = curr_tok->lexeme;
        next_tok();

        if (!curr_is(";"))
        {
            error("expected ';' at end of declaration");
            return Production("error");
        }

        next_tok();

        Production result("declare");
        result.terminals = {
            Production(data_t),
            Production(data_id)};
        return result;
    }

    Production parse_print()
    {
        // print_instr -> print expr ;
        next_tok();

        Production data =
            parse_expr();

        if (!curr_is(";"))
        {
            error("expected ';' at end of print");
            return Production("error");
        }

        next_tok();

        Production result("print_instr");
        result.terminals = {data};
        return result;
    }

    Production parse_instr()
    {
        // instr -> expr ;
        if (curr_is("print"))
            return parse_print();

        if (curr_is_type())
            return parse_decl();

        Production result("expr_instr");
        result.terminals = {parse_expr()};

        if (!curr_is(";"))
        {
            error("expected ';'");
            return Production("error");
        }

        next_tok();
        return result;
    }

    Production parse_instrs()
    {
        // instrs -> instrs instr | instr
        Production result("instrs");

        while (!curr_is("}"))
            result.terminals.push_back(parse_instr());

        return result;
    }

    Production parse_block_instr()
    {
        // block -> {} | { instrs }
        Production result("block_instr");

        if (!curr_is("{"))
        {
            error("expected '{'");
            return Production("error");
        }

        next_tok();

        if (curr_is("}"))
            return result;

        result.terminals =
            parse_instrs().terminals;

        if (!curr_is("}"))
        {
            error("expected '}'");
            return Production("error");
        }

        next_tok();
        return result;
    }

    Production parse_param_decl()
    {
        // param -> type id
        string param_t = curr_tok->lexeme;
        next_tok();
        string param_id = curr_tok->lexeme;
        next_tok();

        Production result("param_decl");
        result.terminals = {
            Production(param_t),
            Production(param_id)};
        return result;
    }

    Production parse_params_decl(Production
        first = Production("func_params_decl"))
    {
        // params -> params, param | param | €
        if (curr_is(")"))
            return first;

        if (curr_is(","))
            next_tok();

        first.terminals.push_back(parse_param_decl());
        return parse_params_decl(first);
    }

    Production parse_raw_decl()
    {
        // decl -> type id ; |
        //         type id ( params ) {...}
        string data_t = curr_tok->lexeme;
        next_tok();

        if (!curr_is_id())
        {
            error("expected id");
            return Production("error");
        }

        string data_id = curr_tok->lexeme;
        next_tok();

        if (curr_is(";"))
        {
            next_tok();
            Production result("decl_var");
            result.terminals = {
                Production(data_t),
                Production(data_id)};
            return result;
        }

        if (!curr_is("("))
        {
            error("expected func params");
            return Production("error");
        }

        next_tok();
        Production params =
            parse_params_decl();

        if (!curr_is(")"))
        {
            error("expected ')'");
            return Production("error");
        }

        next_tok();
        Production result("decl_func");
        result.terminals = {
            Production(data_t),
            Production(data_id),
            params,
            parse_block_instr()};
        return result;
    }

public:
    Parser(string t) : lexer(t) {}

    Production parse()
    {
        Production result("program");

        next_tok();
        while (curr_tok != nullptr)
        {
            result.terminals.push_back(parse_raw_decl());
            if (!error_msg.empty())
            {
                cout << "error\n"
                     << error_msg;
                break;
            }
        }

        return result;
    }
};

/* Language grammar:
program -> data_decls
data_decls -> data_decl data_decls | €
data_decl -> type_id id ( params ) block |
            var_decl

params -> expr | params , expr

block -> { instrs }
instrs  -> instr instrs | €

instr   -> print expr ; | {print instr}
           int id ; |     {decl instr}
           expr ;        {expr instr}

expr    -> expr = num_expr | num_expr

num_expr -> sum | sub
sum     -> num_expr + term | term
sub     -> num_expr - term | term
term    -> mul | div
mul     -> term * val | val
div     -> term / val | val
val     -> ( expr ) | num | id

*/

// =====================================
// =====================================

/* стадии обработки кода:
Лексер: деление на лексемы
Парсер: проверка соответствия граматике
        + адекватный вывод ошибок
        + создание структуры программы
Линкер: создание итогового тернарного кода
        из составленной структуры проги
*/

int main()
{
    string input =
        "void func (int val) {\n"
        "  val = val * 4;\n"
        "  print val;\n"
        "}\n\n"
        "int main (string s, bool b) {\n"
        "  int var;\n"
        "  var = 100 - 15;\n"
        "  print var;\n"
        "}\n";
    //getline (cin, input);

    Production prog = Parser(input).parse();

    cout << "code:\n"
        << input
        << "\nproduction:\n\n"
        << prog.repr();

    return 0;
}