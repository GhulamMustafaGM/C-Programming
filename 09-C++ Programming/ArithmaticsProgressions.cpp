// Arithmatics Progressions 

#include <iostream>

using namespace std;

int main()
{
    int *n = new int; //Variable to be inputted hence Dynamic Memory
    int a[4], d, reqterm, nt, tn, opt, x, p, q, r, s;

    cout << "If common difference and first term are known : ENTER 1" << endl
         << "If first term and nth term are known : ENTER 2" << endl
         << "If nth term and common difference are known : ENTER 3" << endl
         << "If A.P is known : ENTER 4" << endl
         << endl; //Options given
    cin >> *n;    //Chosen option stored as n
    cout << endl;
    /*To add one more option in switch all cases to find the position of value in given A.P*/
    switch (*n)
    {
    case 1: // common difference and first term known
        cout << "Enter first term" << endl;
        cin >> a[0];
        cout << "Enter common difference" << endl;
        cin >> d;
        a[1] = a[0] + d;
        a[2] = a[0] + (2 * d);
        a[3] = a[0] + (3 * d);
        a[4] = a[0] + (4 * d);
        cout << "The A.P is as follows: " << a[0] << "," << a[1] << "," << a[2] << "," << a[3] << "," << a[4] << "......." << endl
             << endl;
        cout << "To check what term a value is in the given A.P : Enter 1" << endl
             << "To find nth term in the given A.P : Enter 2" << endl //options given again
             << "To quit enter any other number" << endl
             << endl;
        cin >> opt; //input stored as variable opt
        switch (opt)
        {
        case 1:
            cout << "Enter the value" << endl; //we know nt,a,d
            cin >> nt;
            if ((nt - a[0]) % d != 0)
            { //using formula a(n)= a+(n-1)d
                cout << "This value is not a part of the given A.P" << endl;
            }
            else
            {
                x = ((nt - a[0]) / d) + 1; //using formula a(n)= a+(n-1)d
                cout << "The given value is the " << x << "st/nd/th term of the given A.P";
            }
            break;
        case 2:
            cout << "which term of the given A.P is required?" << endl;
            cin >> reqterm;
            cout << "The " << reqterm << "st/nd/th term is : " << a[0] + ((reqterm - 1) * d); // a(n)= a+(n-1)d
            break;
        default:
            cout << "Thank You" << endl;
        }
        break;
    case 2: // first term and nth term are known
        cout << "Enter first term" << endl;
        cin >> a[0];
        cout << "Enter nth term and term number" << endl;
        cin >> nt >> tn;
        d = (tn - 1) / (nt - a[0]); // derived from a(n)= a+(n-1)d
        a[1] = a[0] + d;
        a[2] = a[0] + (2 * d);
        a[3] = a[0] + (3 * d);
        a[4] = a[0] + (4 * d);
        cout << "The A.P is as follows: " << a[0] << "," << a[1] << "," << a[2] << "," << a[3] << "," << a[4] << "......." << endl;
        cout << "To check what term a value is in the given A.P : Enter 1" << endl
             << "To find nth term in the given A.P : Enter 2" << endl
             << "To quit enter any other number" << endl
             << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter the value" << endl;
            cin >> nt;
            if ((nt - a[0]) % d != 0)
            { //using formula a(n)= a+(n-1)d
                cout << "This value is not a part of the given A.P" << endl;
            }
            else
            {
                x = ((nt - a[0]) / d) + 1; //using formula a(n)= a+(n-1)d
                cout << "The given value is the " << x << "st/nd/th term of the given A.P";
            }
            break;
        case 2:
            cout << "which term of the given A.P is required?" << endl;
            cin >> reqterm;
            cout << "The " << reqterm << "st/nd/th term is : " << a[0] + ((reqterm - 1) * d); // a(n)= a+(n-1)d
            break;
        default:
            cout << "Thank You" << endl;
        }
        break;
    case 3: //nth term and common difference is known
        cout << "Enter common difference" << endl;
        cin >> d;
        cout << "Enter nth term and term number" << endl;
        cin >> nt >> tn;
        a[0] = nt - (tn - 1 * d); // derived from a(n)= a+(n-1)d
        a[1] = a[0] + d;
        a[2] = a[0] + (2 * d);
        a[3] = a[0] + (3 * d);
        a[4] = a[0] + (4 * d);
        cout << "The A.P is as follows: " << a[0] << "," << a[1] << "," << a[2] << "," << a[3] << "," << a[4] << "......." << endl;
        cout << "To check what term a value is in the given A.P : Enter 1" << endl
             << "To find nth term in the given A.P : Enter 2" << endl
             << "To quit enter any other number" << endl
             << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Enter the value" << endl;
            cin >> nt;
            if ((nt - a[0]) % d != 0)
            { //using formula a(n)= a+(n-1)d
                cout << "This value is not a part of the given A.P" << endl;
            }
            else
            {
                x = ((nt - a[0]) / d) + 1; //using formula a(n)= a+(n-1)d
                cout << "The given value is the " << x << "st/nd/th term of the given A.P";
            }
            break;
        case 2:
            cout << "which term of the given A.P is required?" << endl;
            cin >> reqterm;
            cout << "The " << reqterm << "st/nd/th term is : " << a[0] + ((reqterm - 1) * d); // a(n)= a+(n-1)d
            break;
        default:
            cout << "Thank You" << endl;
        }
        break;
    case 4: //A.P is known
        cout << "Enter first 5 terms one by one in order" << endl;
        cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
        p = a[1] - a[0];
        q = a[2] - a[1];
        r = a[3] - a[2];
        s = a[4] - a[3];
        if (p == q && q == s && s == r && r == p)
        {
            cout << "Yes,these values are in A.P";
            d = a[1] - a[0]; //a[1]-a[0] = a[2]-a[1] = a[3]-a[2] = a[4]-a[3] and so on....
            cout << "To check what term a value is in the given A.P : Enter 1" << endl
                 << "To find nth term in the given A.P : Enter 2" << endl
                 << "To quit enter any other number" << endl
                 << endl;
            cin >> opt;
            switch (opt)
            {
            case 1:
                cout << "Enter the value" << endl;
                cin >> nt;
                if ((nt - a[0]) % d != 0)
                { //using formula a(n)= a+(n-1)d
                    cout << "This value is not a part of the given A.P" << endl;
                }
                else
                {
                    x = ((nt - a[0]) / d) + 1; //using formula a(n)= a+(n-1)d
                    cout << "The given value is the " << x << "st/nd/th term of the given A.P";
                }
                break;
            case 2:
                cout << "which term of the given A.P is required?" << endl;
                cin >> reqterm;
                cout << "The " << reqterm << "st/nd/th term is : " << a[0] + ((reqterm - 1) * d); // a(n)= a+(n-1)d
                break;
            default:
                cout << "Thank You" << endl;
            }
            break;
        }
        else
        {
            cout << "The given numbers are not in A.P";
        }
        break;
    }
    delete n;
}