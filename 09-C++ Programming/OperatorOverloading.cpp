// operator overloading

#include <iostream>
using namespace std;

class Sample
{
    string str = "hello";

public:
    friend istream &operator>>(istream &in, Sample &s)
    {
        in >> s.str;
        return in;
    }

    friend ostream &operator<<(ostream &out, const Sample &s)
    {
        out << s.str;
        return out;
    }

    Sample &operator++(int)
    {
        str += ", world!";
        return *this;
    }
};

int main()
{
    Sample example;
    cout << example << endl;
    example++;
    cout << example << endl;
    cin >> example;
    cout << example << endl;
    example++;
    cout << example;
    return 0;
}