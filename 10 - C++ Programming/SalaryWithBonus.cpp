// Salary with bonus

#include <iostream>
using namespace std;

int main()
{
    float a;
    float f;
    cin >> a;
    cin >> f;
    float e = a * 1;
    float g = f * 1;
    float b = ((g + 100) * a) / 100;
    float c = (g * a) / 100;
    cout << "Your original salary is $";
    cout << a;
    cout << ".\nYour " << g << "% bonus is $" << c;
    cout << ".\nYour salary with " << g << "% bonus is $" << b;
    cout << "." << endl;
    
    return 0;
}
