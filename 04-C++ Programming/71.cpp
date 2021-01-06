// Specialization_ow_template

#include <iostream>
using namespace std;

struct job
{
    string name;
    int salary;
};
//order
//order1 non-template function template
void Swap(string &, string &);

//order3 template prototype
template <typename Any>
void Swap(Any &, Any &);

//order2 explicit specialization for the string type
template <>
void Swap<job>(job &, job &);

void show(const job &);
int main()
{
    job job1 = {"1job", 900};
    job job2 = {"2job", 800};
    cout << "before swap:\n";
    show(job1);
    show(job2);
    cout << endl;
    Swap(job1, job2);
    cout << "after swap:\n";
    show(job1);
    show(job2);
    return 0;
}
void Swap(string &x, string &y)
{
    Swap(x[0], y[0]);
}
template <typename Any>
void Swap(Any &x, Any &y)
{
    Any temp = x;
    x = y;
    y = temp;
}

template <>
void Swap<>(job &j1, job &j2)
{
    Swap(j1.salary, j2.salary);
    Swap(j1.name, j2.name);
}

void show(const job &j)
{
    cout << j.name << " ";
    cout << j.salary << endl;
}
