// Prime numbers from 2 to n

#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{

    // You can change this to match your device's screen
    const int maxChars = 55;
    int c = 0;

    int num;
    cin >> num;

    if (cin.fail())
    {
        cout << "Invalid input. Please type an integer";
        return 1;
    }

    int chars = to_string(num).length();
    int count = 0;

    cout << "All prime numbers from 2 to " << num << endl
         << string(maxChars, '-') << endl;

    for (int x = 2; x <= num; x++)
    {
        if (isPrime(x))
        {
            cout << x;
            for (int y = 0; y < chars - to_string(x).size() + 1; y++)
            {
                cout << ' ';
            }
            c += chars + 1;
            if (c + chars > maxChars)
            {
                cout << endl;
                c = 0;
            }
            count++;
        }
    }

    cout << string(maxChars, '-') << "\nCount: " << count << "\nMade by ReimarPB";

    return 0;
}