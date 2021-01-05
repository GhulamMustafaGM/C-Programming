// Pointers program

#include <iostream>
using namespace std;

int main()
{
    // * indirect value
    //NOTE:int* is a point type
    int *p_updates;
    int var = 7;
    p_updates = &var;
    cout << "*p_updates: " << *p_updates << endl;
    cout << "p_updates: " << p_updates << endl;
    // delete p_updates ;   //not allow

    //how to new a pointer
    int *new_pointer = new int;
    *new_pointer = 123;
    cout << "*new_pointer: " << *new_pointer << endl;
    cout << "new_pointer: " << new_pointer << endl;
    delete new_pointer; //use delete only memory allocated by new
                        //  delete new_pointer ;//not ok

    long *fellow;
    *fellow = 1000L;                        //its dangerous
    cout << "*fellow: " << *fellow << endl; //?
    cout << "fellow: " << fellow << endl;   //?

    return 0;
}
