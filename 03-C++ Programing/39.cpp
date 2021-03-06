// Demonstrate using.

#include <iostream>
using namespace std;

namespace CounterNameSpace
{
    int upperbound;
    int lowerbound;

    class counter
    {
        int count;

    public:
        counter(int n)
        {
            if (n <= upperbound)
                count = n;
            else
                count = upperbound;
        }
        void reset(int n)
        {
            if (n <= upperbound)
                count = n;
        }
        int run()
        {
            if (count > lowerbound)
                return count--;
            else
                return lowerbound;
        }
    };
} // namespace CounterNameSpace

int main()
{
    // use only upperbound from CounterNameSpace
    using CounterNameSpace::upperbound;

    // now, no qualification needed to set upperbound
    upperbound = 100;

    // qualificatio nstill needed for lowerbound, etc.
    CounterNameSpace::lowerbound = 0;

    CounterNameSpace::counter ob1(10);
    int i;

    do
    {
        i = ob1.run();
        cout << i << " "
    } while (i > CounterNameSpace::lowerbound);
    cout << endl;

    // Now, use entire CounterNameSpace
    using namespace CounterNameSpace;

    counter ob2(20);

    do
    {
        i = ob2.run();
        cout << i << " ";
    } while (i > lowerbound);
    cout << endl;

    ob2.reset(100);
    lowerbound = 90;

    do
    {
        i = ob2.run();
        cout << i << " ";
    } while (i > lowerbound);
}

/* output:

10 9 8 7 6 5 4 3 2 1 0
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
100 99 98 97 96 95 94 93 92 91 90

*/