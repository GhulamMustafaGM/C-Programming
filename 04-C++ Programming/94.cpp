// Snail climb

#include <iostream>
    using namespace std;

int main()
{
    int h, a, b, ans;
    cout << "enter the height of tree : ";
    cin >> h;
    cout << h;
    cout << "\nenter the climbing steps : ";
    cin >> a;
    cout << a;
    cout << "\nenter the down coming steps :";
    cin >> b;
    cout << b;
    ans = ((h - a) / (a - b)) + 1;
    cout << "\n\nno.of day requied : ";
    cout << ans;
    return 0;
}