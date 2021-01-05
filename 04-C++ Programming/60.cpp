// delete

#include <iostream>
using namespace std;
#include <string>
#include <cstring>

char *getname();
int main()
{
    char *p_name;
    p_name = getname();
    cout << p_name;
    //Must use delete [] free memory
    delete[] p_name;
    return 0;
}

char *getname()
{
    char temp[80];
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    //copy string into smaller space
    strcpy(pn, temp);
    return pn;
}