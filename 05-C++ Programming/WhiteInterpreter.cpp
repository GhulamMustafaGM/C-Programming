// WhiteSapce Interpreter

#include <iostream>
#include <vector>

void excute(const char *i);

int main()
{
    const char *const hello =
        "   \t  \t   \n\t\n"
        "     \t\t  \t \t\n\t\n"
        "     \t\t \t\t  \n\t\n"
        "     \t\t \t\t  \n\t\n"
        "     \t\t \t\t\t\t\n\t\n";

    excute(hello);
    std::cout << std::endl;
    system("pause");
    return 0;
}

void swap(char *x, char *y);
char whitespaceToChar(const char **i); //From the pointer "i" To EOL.
bool cmp2byte(const char *const x, const char *const y);

void excute(const char *i)
{
    std::vector<char> stack;

    for (; *i != '\0'; ++i)
    {
        //Stack manipulation
        if (*i == ' ')
        {
            ++i;
            if (*i == ' ') //Push the value to the stack.
            {
                ++i;
                stack.push_back(whitespaceToChar(&i));
            }
            else if (cmp2byte(i, "\n ")) //Duplicate the top of the stack
            {
                i += 1;
                stack.push_back(stack.back());
            }
            else if (cmp2byte(i, "\t ")) //Copy the "n"th stack and stack it on top
            {
                i += 2;
                stack.push_back(stack[whitespaceToChar(&i)]);
            }
            else if (cmp2byte(i, "\n\t")) //Exchange the first and second in the stack
            {
                i += 1;
                swap(&stack[0], &stack[1]);
            }
            else if (cmp2byte(i, "\n\n")) //Throw away the top of the stack.
            {
                i += 1;
                stack.pop_back();
            }
        }

        //Arithmetic
        else if (cmp2byte(i, "\t "))
        {
            i += 2;
            if (cmp2byte(i, "  ")) //+
            {
                i += 2;
                *(stack.end() - 2) += stack.back();
                stack.pop_back();
            }
            else if (cmp2byte(i, " \t")) //-
            {
                i += 2;
                *(stack.end() - 2) -= stack.back();
                stack.pop_back();
            }
            else if (cmp2byte(i, " \n")) //*
            {
                i += 2;
                *(stack.end() - 2) *= stack.back();
                stack.pop_back();
            }
            else if (cmp2byte(i, "\t ")) // /
            {
                i += 2;
                *(stack.end() - 2) /= stack.back(); //Note the division by zero!!
                stack.pop_back();
            }
            else if (cmp2byte(i, "\t\t")) //%
            {
                i += 2;
                *(stack.end() - 2) %= stack.back();
                stack.pop_back();
            }

            --i;
        }

        //Heap access
        else if (cmp2byte(i, "\t\t"))
        {
            i += 1;
        }

        //Flow control
        else if (*i == '\n')
        {
        }

        //I/O
        else if (cmp2byte(i, "\t\n"))
        {
            i += 1;
            std::cout << stack.back() << std::flush;
        }

        else
            continue; //Ignore
    }
}

void swap(char *x, char *y)
{
    char temp = *y;
    *y = *x;
    *x = temp;
}

char whitespaceToChar(const char **i)
{
    char temp = 0;

    for (; **i != '\0' && **i != '\n'; ++(*i))
    {
        switch (**i)
        {
        case ' ':
            temp *= 0b10;
            break;
        case '\t':
            temp *= 0b10;
            temp += 0b1;
        default:
            continue; //Ignore
        }
    }

    return temp;
}

bool cmp2byte(const char *const x, const char *const y)
{
    return *(int16_t *)x == *(int16_t *)y;
}