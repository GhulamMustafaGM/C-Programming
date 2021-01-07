// Question paper OOP with cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{

    std::cout << "OBJECT ORIENTED PROGRAMMING WITH C++" << std::endl;
    char BiShu;
    for (BiShu = 0; BiShu <= 36; BiShu++)
        cout << "_";

    cout << "\nInstructions:\n\n Time Allowed - Three Hours\n Maximum Marks - 80\n";
    cout << "\n(1) Question no. 1 is compulsory. Attempt any FOUR question from the remaining questions.";
    cout << "\n(2) All question carry equal marks.\n";

    char Poo;
    for (Poo = 0; Poo <= 90; Poo++)

        cout << "+";

    const char *const questions =

        "\n\n1.\n (a)   Difference between strucutred programming and object oriented programming."
        "\n (b)   Define class and objects."
        "\n (c)   What do you mean by Data Hiding."
        "\n (d)   Write the use of scope resolution operator in C++."
        "\n (e)   What do you mean by polymorphism."
        "\n (f)   Define Templates in C++."
        "\n (g)   What are the advantages of linked list over Array."
        "\n (h)   Define function overloading in C++."

        "\n\n2.\n (a)   Discuss the important features of object oriented programming. Explain the organization of data and function in OOP."
        "\n (b)   Explain how a inline function differ from a preprocessor macro? Explain significant advantages of inline function."

        "\n\n3.\n (a)   Write a program using function template for finding the minimum value contained in an Array."
        "\n (b)   What is operator overloading. Explain the importance of operator overloading."

        "\n\n4.\n (a)   What is absract class? When do we use the protected visibility specifiers to a class member?"
        "\n (b)   What is a virtual base class? Why it is important to make a class virtual."

        "\n\n5.\n (a)   Write a C++ program to create a class called STRING and implement the following operations.\n       Display the result after every operation by overloading the operator<<"
        "\n (i)     STRING S1 = 'RED'"
        "\n (ii)    STRING S2 = 'APPLE'"
        "\n (iii)   STRING S3 = 'S1+S2' (Use Copy Constructor)"

        "\n\n6.\n (a)   Write a C++ program to illustrate multiple inheritance."
        "\n (b)   Define exception handling. Explain the use of try, catch and throw for exception handling in C++."

        "\n\n7.\n       Write short notes on following -"
        "\n (a)   Stack"
        "\n (b)   Queues"
        "\n (c)   Dynamic memory allocation in C++"
        "\n (d)   Destructor";

    std::cout << questions;

    return 0;
}