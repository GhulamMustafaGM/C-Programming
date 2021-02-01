// Shift happens

#include <iostream>
#include <bitset>
using std::cin;
using std::cout;
using std::endl;

struct Multi
{
    unsigned long long int data;

    Multi(unsigned long long int _hex);
    Multi(unsigned short, unsigned short, unsigned short, unsigned short);
    //only used for accessing, not for setting values
    unsigned short operator[](int idx);

    //usage: setValue(idx, value)
    void setValue(int, unsigned short);

    void printData();
    void printHex();
};

int main()
{
    unsigned short a, b, c, d;
    cin >> a >> b >> c >> d;

    Multi var(a, b, c, d);

    cout << "Your numbers: " << endl;
    var.printData();

    cout << "\nHex value of all numbers: " << endl;
    var.printHex();

    cout << "\nIndividual access to the numbers: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << var[i] << " ";
    }
    cout << endl;

    cout << "\nSet some values: " << endl;
    var.data = 0x10920C45ABCD002A;
    var.printHex();
    var.printData();

    cout << "\nSet values to max value: " << endl;
    var.setValue(0, 0xFFFF);
    var.printData();
    var.setValue(1, 0xFFFF);
    var.printData();
    var.setValue(2, 0xFFFF);
    var.printData();
    var.setValue(3, 0xFFFF);
    var.printData();

    return 0;
}

Multi::Multi(unsigned long long int _hex)
{
    data = _hex;
}

Multi::Multi(unsigned short a, unsigned short b, unsigned short c, unsigned short d)
{
    setValue(0, a);
    setValue(1, b);
    setValue(2, c);
    setValue(3, d);
}

unsigned short Multi::operator[](int idx)
{
    unsigned long long int _hex = data;
    for (int i = 0; i < idx; i++)
    {
        _hex = _hex >> 16;
    }

    return (unsigned short)_hex;
}

void Multi::setValue(int idx, unsigned short value)
{
    unsigned long long int _hex = data;

    //save current values
    unsigned short a = (unsigned short)_hex;
    _hex = _hex >> 16;
    unsigned short b = (unsigned short)_hex;
    _hex = _hex >> 16;
    unsigned short c = (unsigned short)_hex;
    _hex = _hex >> 16;
    unsigned short d = (unsigned short)_hex;

    //change value assigned to index
    switch (idx)
    {
    case 0:
        a = value;
        break;
    case 1:
        b = value;
        break;
    case 2:
        c = value;
        break;
    case 3:
        d = value;
        break;
    }

    //set base 0
    _hex = 0;

    //fill base
    _hex = _hex | d;   // 0 0 0 D
    _hex = _hex << 16; // 0 0 D 0
    _hex = _hex | c;   // 0 0 D C
    _hex = _hex << 16; // 0 D C 0
    _hex = _hex | b;   // 0 D C B
    _hex = _hex << 16; // D C B 0
    _hex = _hex | a;   // D C B A

    //update member variable
    data = _hex;
}

void Multi::printData()
{
    unsigned long long int _hex = data;
    cout << "| " << std::dec << (unsigned short)_hex << " | ";
    for (int i = 2; i > -1; i--)
    {
        _hex = _hex >> 16;
        cout << std::dec << (unsigned short)_hex << " | ";
    }
    cout << endl;
}

void Multi::printHex()
{
    cout << std::hex << std::uppercase << data << std::dec;
    cout << endl;
}
