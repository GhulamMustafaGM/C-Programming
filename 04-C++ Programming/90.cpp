// Reference struct

#include <iostream>
using namespace std;

struct sysop
{
    string name;
    int used;
};

sysop &use(sysop &);
int main()
{
    sysop my_sys = {"wang", 0};
    use(my_sys);
    cout << my_sys.used << endl; //?
    sysop your_sys;
    your_sys = use(my_sys);

    cout << my_sys.used << endl; //?
    cout << your_sys.used;       //?
    return 0;
}

sysop &use(sysop &sysopref)
{
    sysopref.used++;
    return sysopref;
}

sysop &clone(sysop &sysopref)
{
    sysop new_sys = sysopref;
    return new_sys; //valid? cant do it
}