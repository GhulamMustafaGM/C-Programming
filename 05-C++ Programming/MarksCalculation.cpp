#include <iostream>
using namespace std;

int main()
{

    int marks;

    cout << "enter your marks" << endl;
    //cout is not required here,but in pc its must and should .
    cin >> marks;

    if (marks < 28)
    {
        cout << "sorry to inform you that \n you have failed" << endl;
    }
    else
    {
        cout << "congratulation you have passed" << endl;
    }
    return 0;
}