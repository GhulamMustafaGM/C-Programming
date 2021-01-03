// Exam marks

/* This program take the exam's mark and output the comment
i consider that the higher note is 20/20*/

#include <iostream>
using namespace std;

int main()
{
    int mark;
    cout << "imput the exam mark, please\n";
    cin >> mark;
    if (mark < 10)
    {
        cout << "You fell in the exam\n";
    }
    if (mark >= 10 && mark < 14)
    {
        cout << "Good\n";
    }
    if (mark >= 14 && mark < 18)
    {
        cout << "Verry good\n";
    }
    if (mark >= 18 && mark <= 20)
    {
        cout << "excellent\n";
    }
    if (mark > 20)
    {
        cout << "Error! the mark must not exceed 20\n";
    }
    return 0;
}