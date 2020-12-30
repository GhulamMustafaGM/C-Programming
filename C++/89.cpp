// This program contains two functions: main() and myfunc()

#include <iostream>
using namespace std;

void myfunc(); // myfunc's prototype

int main()
{
    cout << "\nIn main() ";
    myfunc(); // call myfunc()

    cout << "Back in main() ";
    cout << endl;
    return 0;
}

void myfunc()
{
    cout << " Inside myfunc() ";
}

/*

 main()  Inside myfunc() Back in main()

*/