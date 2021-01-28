// Error Hybriad level inheritance

#include <iostream>
using namespace std;

class student
{
protected:
    int rno;

public:
    void get_rno(int x)
    {
        rno = x;
    }
    void show_rno()
    {
        cout << "\nRoll no.:";
    }
};
class theory : virtual public student
{
protected:
    int sub1, sub2;

public:
    void get_tmarks(int x, int y)
    {
        sub1 = x;
        sub2 = y;
    }
    void show_tmarks()
    {
        cout << "\nMarks of theory subject 1:" << sub1;
        cout << "\nMarks of theory subject 2:" << sub2;
    }
};
class practical : virtual public student
{
protected:
    int p;

public:
    void get_pmarks(int x)
    {
        p = x;
    }
    void show_pmarks(int x)
    {
        cout << "\nMarks of practical:" << p;
    }
};
class result : public theory, public practical
{
    int tot;

public:
    void tot_marks()
    {
        tot = sub1 + sub2 + p;
        cout << "\nTotal Marks:" << tot;
    }
};

main()

{

    result r;
    r.get_rno(101);
    r.get_tmarks(87, 95);
    r.get_pmarks(96);
    r.show_rno();
    r.show_tmarks();
    r.show_pmarks();
    r.tot_marks();
    return 0;
}