// Mini c++ compiler part second

// this part of mini c++ compiler
// shows basics of data holding
// and interpreting.

// BaseData - universal data type
// for variables, functions

// DataTable - struct for holding
// all program data with real-time
// access to any data parameters.

// Program starts with calling
// function with name 'main' in
// DataTable.

#include <iostream>
#include <string>
#include <list>
#include <map>
using namespace std;

struct DataTable;
struct BaseData
{
    int type;
    string name, value;

    BaseData(string tname, string name, string value = "") : type(get_type_index(tname)), name(name), value(value) {}

    virtual pair<bool, string> get_value(DataTable *dt);
    virtual string repr(string tab = "")
    {
        return "BaseData(" + get_type_name() +
               "," + name + "," + value + ")";
    }

    string get_type_name()
    {
        for (auto iter : type_map)
            if (iter.second == type)
                return iter.first;
        throw "unexpected error";
    }

    static map<string, int> type_map;
    static bool type_exsits(string tname)
    {
        return type_map.count(tname);
    }
    static int get_type_index(string tname)
    {
        if (!type_exsits(tname))
            return -1;
        else
            return type_map[tname];
    }
    static void register_type(string tname)
    {
        if (type_exsits(tname))
            return;
        static int index = 1;
        type_map.insert({tname, index++});
    }
};
map<string, int> BaseData::type_map;

int dtable_counter = 0;

struct DataTable
{
    list<list<BaseData *>> data;

    DataTable()
    {
        cout << "created data table: " << ++dtable_counter << endl;
        enter();
    }

    ~DataTable()
    {
        cout << "deleted data table with size = " << data.size() << endl;
        dtable_counter--;
    }

    void enter()
    {
        cout << "trying dt enter...";
        data.push_front(list<BaseData *>());
        cout << " ok" << endl;
    }
    void out()
    {
        cout << "trying dt out...";
        if (data.size() > 1)
        {
            data.pop_front();
            cout << " ok" << endl;
        }
        else
            cout << " bad" << endl;
    }

    void add_data(BaseData *d)
    {
        data.front().push_back(d);
    }

    BaseData *get(string name)
    {
        for (auto dlist : data)
            for (auto iter : dlist)
                if (iter->name == name)
                    return iter;
        return nullptr;
    }

    pair<bool, string> get_value(string dname)
    {
        BaseData *var = get(dname);
        if (var == nullptr)
            return {true, ""};
        return var->get_value(this);
    }

    string repr(string tab = "")
    {
        string result = tab + "DataTable\n" + tab + "{\n";

        for (auto dlist : data)
        {
            result += tab + "  stack data\n" + tab + "  {\n";
            for (auto iter : dlist)
                result += iter->repr(tab + "    ") + "\n";
            result += tab + "  }\n";
        }

        return result + tab + "}\n";
    }
};
pair<bool, string> BaseData::get_value(DataTable *dt)
{
    cout << "getting base data value" << endl;
    if (!name.empty() && value.empty())
    {
        cout << "matchig table..." << endl;
        return dt->get_value(name);
    }
    else
    {
        cout << "returning base value" << endl;
        return {true, value};
    }
}

struct Instruction
{
    virtual bool execute(DataTable *dt) { return true; }
    virtual string repr(string tab = "") { return tab + "void instr;"; }
};
struct Return_instr : Instruction
{
    BaseData *data;
    Return_instr(BaseData *d) : data(d) {}

    bool execute(DataTable *dt)
    {
        throw data;
    }

    string repr(string tab = "")
    {
        return tab + "return(" + data->repr() + ");";
    }
};
struct Block_instr : Instruction
{
    list<Instruction *> instrs;
    list<Instruction *>::iterator iter;
    bool running;

    Block_instr() : iter(instrs.end()), running(false) {}

    void add_instr(Instruction *i)
    {
        instrs.push_back(i);
        iter = instrs.begin();
    }

    bool execute(DataTable *dt)
    {
        try
        {
            if (!running)
            {
                dt->enter();
                running = true;
                cout << dt->repr() << endl;
            }

            if (iter != instrs.end())
                if ((*iter)->execute(dt))
                    iter++;

            if (iter == instrs.end())
            {
                dt->out();
                running = false;
                return true;
            }
            else
                return false;
        }
        catch (BaseData *value)
        {
            cout << "catched value " << value->repr() << endl;
            dt->out();
            running = false;
            cout << dt->repr() << endl;
            throw value;
        }
    }

    string repr(string tab = "")
    {
        string result = tab + "{\n";
        for (auto iter : instrs)
            result += iter->repr(tab + "  ") + "\n";
        return result + tab + "}";
    }
};

struct Function : BaseData
{
    Block_instr *body, *new_body;
    list<BaseData *> args;
    bool is_running;

    Function(string tname, string name, list<BaseData *> arg_list, Block_instr *instrs) : BaseData(tname, name), body(instrs), args(arg_list), is_running(false) {}

    void reload(Block_instr *instrs = nullptr)
    {
        if (instrs != nullptr)
            new_body = instrs;
        if (!is_running)
            body = new_body;
    }

    pair<bool, string> get_value(DataTable *dt)
    {
        cout << "calling a function " << name << endl;
        is_running = true;
        try
        {
            body->execute(dt);
        }
        catch (BaseData *value)
        {
            cout << "returning value..." << endl;
            is_running = false;
            return value->get_value(dt);
        }
        return {false, ""};
    }

    string repr(string tab = "")
    {
        string result = tab + "function: " + get_type_name() + " " + name + "()\n";
        result += body->repr(tab);
        return result;
    }
};

struct Program
{
    DataTable dtable;

    Program()
    {
        BaseData::register_type("int");
    }

    bool execute_next()
    {
        return dtable.get_value("main").first;
    }

    void run()
    {
        cout << "starting execution..." << endl;
        while (!execute_next())
            /* do nothing */;
        cout << "execution complete." << endl;
    }

    string repr()
    {
        return "C++ program:\n" + dtable.repr();
    }
};