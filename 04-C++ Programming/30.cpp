// Is Divisible by x and Y

#include <iostream>
#include <algorithm>

int main()
{
    using namespace std;

    // get the inputs (num, divisor 1,2)
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    cout << num[0] << " divisible by "
        << num[1] << " and "
        << num[2] << "? : "
        << boolalpha
         // std::all_of returns true if the
         // predicate is true for all elements
         // Here the predicate is num%x == 0

        << all_of(begin(num) + 1, end(num), [=](int n) {
                return !(num[0] % n);
            });

    return 0;
}

/* Output:

45 8 6
45 divisible by 8 and 6? : false

*/