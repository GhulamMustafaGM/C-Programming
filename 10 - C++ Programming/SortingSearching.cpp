// sorting and searching

#include <iostream>
using namespace std;

int main()
{
    int a[10], size, i, j;
    cout << "\narray size : " << endl;
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "\n enter the array elements : a[" << i << "]" << endl;
        cin >> a[i];
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\n elements are sorted in list :";
    for (i = 0; i < size; i++)
    {
        cout << "\n"
             << a[i];
    }

    char ch;
    cout << "\n Do you want to search any key element...?";
    cout << "\n press 'y' or 'Y' to search :";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        int key;
        cout << "\n enter the key value : ";
        cin >> key;

        for (i = 0; i < size; i++)
        {
            if (a[i] == key)
            {
                cout << " \n Key Found At " << i << "\n"
                     << "\n searched element : " << a[i] << "... :)" << endl;
                break;
            }
            else
            {
                cout << " \n Soorry The Key you'r Searching is Not Found In The List... :( " << endl;
                break;
            }
        }
    }
    else
        cout << "invalid option";
    return 0;
}