// Dectect end-of-file using eof().

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;

    if (argc != 2)
    {
        cout << "Usage: PR <filename>\n";

        return 1;
    }
    ifstream in(argv[1], ios::in | ios::binary);
    if (!in)
    {
        cout << "Cannot open file.\n";
        return 1;
    }

    while (!in.eof())
    { // use eof()
        in.get(ch);
        if (!in.eof())
            cout << ch;
    }
    in.close();

    return 0;
    return 0;
}

/* Output */