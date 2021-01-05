// My Union 

#include <iostream>
#include <string>

using namespace std;
//int  long  double
union id
{
    int int_id;
    double double_id;
} id_var;

int main()
{

    id_var.int_id = 100;
    cout << id_var.int_id << endl; //？
    id_var.double_id = 55.5;
    cout << id_var.int_id << endl;    //？
    cout << id_var.double_id << endl; //？
    return 0;
}

/* ouput

100
0
55.5

*/