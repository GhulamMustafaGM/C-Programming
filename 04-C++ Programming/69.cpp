#include <iostream>
using namespace std;
//declare namespace
namespace my_space
{
    struct cin
    {
        string name;
        int id;
    };
} // namespace my_space
int main()
{
    using my_space::cin;
    cin worker_wang = {
        "wang",
        1};
    int a;
    //cin>>a;//error？
    std::cin >> a; //??valid
    cout << worker_wang.name << " "
         << worker_wang.id << endl;
    cout << a;
    return 0;
}