// Use put() to write to a file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char *p = "hello there";
    ofstream out("test", ios::out | ios::binary);

    if (!out)
    {
        cout << "Cannot open file.\n";

        return 1;
    }

    while (*p)
        out.put(*p++);
    out.close();

    return 0;
}

/* Output:


*/