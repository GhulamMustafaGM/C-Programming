#include <iostream>  //Input output stream
#include <math.h>    // Math header
using namespace std; //Instead of doing std::int main()

string op_Erators[5] = {"+", "-", "*", "/", "^"};
bool checkOp(string op)
{
    for (int a = 0; a < 5; a++)
    {
        if (op == op_Erators[a])
        {
            return true;
            break;
        }
    }
}

double getSol(string op, double num_1, double num_2) //Looping through an array is more practical than adding unnecessary lines of if statements.
{
    double op_Erations[5] = {num_1 + num_2, num_1 - num_2, num_1 * num_2, num_1 / num_2, pow(num_1, num_2)};
    for (int a = 0; a < 5; a++)
    {
        if (op == op_Erators[a])
        {
            return op_Erations[a];
            break;
        }
    }
}

int main() //Every program starts with int main()
{
    double Solution;
    bool use_Again = true, sol_Num = false; //Set values for using program again
    //and for the option to include the solution in other calculations.
    string op_Erator = ""; //Used to store operator.
    do
    {
        double num1 = 0, num2 = 0;
        if (op_Erator == "")
        {
            cout << "Enter an operator. (+, -, *, /, ^)" << endl;
            cin >> op_Erator; //Enter an operator
        }
        if (checkOp(op_Erator))
        {
            //Check validity of value
            cout << "Enter number." << endl;
            cin >> num1; //Number being calculated.
            if (sol_Num)
            {
                //Whether number comes before or after operator depends on if user wants solution to be included.
                num2 = num1;
                num1 = Solution;
            }
            else
            {
                cout << "Enter another number." << endl;
                cin >> num2;
            }
            Solution = getSol(op_Erator, num1, num2); //Operator is evaluated using the getSol() function.
            cout << num1 << " " << op_Erator << " " << num2 << " = " << Solution << endl;
            op_Erator = "end";
            cout << "Enter operator to include solution in next calculation." << endl;
            cin >> op_Erator; //Solution is used as the first number in the equation if sol_Num is true.
            if (op_Erator == "end")
                use_Again = false;
            else if (checkOp(op_Erator))
                sol_Num = true;
            else
            {
                op_Erator = "";
                sol_Num = false;
            }
        }
        else
        {
            cout << "Invalid operator!" << endl; //Let's user know if value is not an operator.
            op_Erator = "";
        }
    } while (use_Again); //Loop runs again if value is true.
    return 0;
}