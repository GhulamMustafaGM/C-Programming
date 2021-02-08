// Sorting using vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vect;
    vector<int>::iterator i, j;

    int el, n;

    cout << "Enter the size of the array : ";
    cin >> n;
    cout << n << endl
         << "Enter the elements of the array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> el;
        vect.push_back(el);
        cout << el << " ";
    }

    cout << endl
         << "Your array in ascending order : " << endl;

    for (i = vect.begin(); i != vect.end() - 1; i++)
    {
        for (j = i; j != vect.end(); j++)
        {
            if (*i > *j)
            {
                el = *i;
                *i = *j;
                *j = el;
            }
        }
    }

    for (i = vect.begin(); i != vect.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}
