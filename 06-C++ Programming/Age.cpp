// Age Program

#include <iostream>
using namespace std;

int main()
{
    cout << "What is your age: \n\n";
    int age;
    cin >> age;
    cout << "Your age is ";
    cout << age << endl;

    if (age <= 10)
    {
        cout << "You are a child now \n\n";
    }
    else if (age > 10 && age < 18)
    {
        cout << "You are a teenager now !" << endl;
    }

    else if (age >= 18 && age < 50)
    {
        cout << "You are an adult !" << endl;
    }
    else if (age >= 50 && age < 75)
    {
        cout << "You are aged !" << endl;
    }

    else if (age >= 75 && age < 100)
    {
        cout << "You are too old !" << endl;
    }

    else if (age == 100)
    {
        cout << "You are too much lucky as you lived a whole century !" << endl;
    }
    else
    {
        cout << "Inapropriate input or input exceed age limit !" << endl;
    }

    system("Pause");
    return 0;
}