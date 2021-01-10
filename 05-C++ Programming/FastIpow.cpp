// Fast 1pow (maybe not )

/* surprise if you come up with nasty bugs!
*/
// For input just enter the base and exponent in seperate lines
// E.g.
// 2
// 8
//
// output : 256
// ==============================

#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include <regex>
using namespace std;

typedef unsigned long long ull;

/*-----------------------------*/
/*                             */
/*          INTERFACE          */
/*                             */
/*-----------------------------*/
//
//  ____________________________
// |       Fast_ipow (UML)      |
// +----------------------------+
// | - iExponent : UShort       |
// | - iBase     : ULL          |
// |____________________________|
// | + ipow()    : double       |
// | - validate(String, String) |
// |             : Boolean      |
// | - is_safe(ULL, UShort)     |
// |             : Boolean      |
// |____________________________|

class Fast_ipow
{
public:
    Fast_ipow(const string &base, const string &expo);
    double ipow();

private:
    // 3-steps validating user's input
    bool validate(const string &base, const string &expo);

    // A makeshift overflow checker.
    bool is_safe(ull base, unsigned short expo);

    unsigned short iExponent;
    ull iBase;
};

/*-----------------------------*/
/*                             */
/*       IMPLIMENTATION        */
/*                             */
/*-----------------------------*/

Fast_ipow::Fast_ipow(const string &base, const string &expo)
{

    if (!validate(base, expo))
    {

        // set arbitrary values as sign of failing
        iExponent = 1;
        iBase = 0;
        return;
    }

    if (!is_safe(iBase, iExponent))
        cout << "WARNING: Possible overflow.\n";
}
bool Fast_ipow::validate(const string &base, const string &expo)
{

    regex base_pat("\\+?[[:digit:]]{1,19}");
    regex expo_pat("\\+?[[:digit:]]{1,3}");
    regex neg_pat("-[[:digit:]]+");
    regex float_pat("(\\+|-)?[[:digit:]]*\\.[[:digit:]]+");

    // string to int temporarily to examine boundary
    ull base_tmp;
    unsigned short expo_tmp;
    stringstream ss;

    ss.str(base);
    ss >> base_tmp;

    ss.clear();
    ss.str("");

    ss.str(expo);
    ss >> expo_tmp;

    ull base_bound = numeric_limits<ull>::max() >> 1u;

    if (!((regex_match(base, base_pat) && // check for base matching
           base_tmp <= base_bound) &&     // check for base bound
          (regex_match(expo, expo_pat) && // check for exponent matching
           expo_tmp < 256)))              // check for exponent bound
    {

        if (regex_match(base, neg_pat) || regex_match(expo, neg_pat))
            cout << "ERROR 01: Negative input. Both base and exponent must be positive integers.\n";

        // invalid input may cause wrap around and intermediate variables might be huge.
        if (base_tmp > base_bound || expo_tmp > 255)
            cout << "ERROR 02: Too large input(might be wrap around). Exp must be [0-255] and base [0-" << base_bound << "].\n";

        if (regex_match(base, float_pat) || regex_match(expo, float_pat))
            cout << "ERROR 03: Floating point input.\n";

        return false;
    }
    else
    {
        // rather than initializing in constructor, base and exponent being assigned confidently after validating.
        iBase = base_tmp;
        iExponent = expo_tmp;

        return true;
    }
}
bool Fast_ipow::is_safe(ull base, unsigned short expo)
{

    // Set all bits to 0 except the leftmost 1 bit
    --base;
    base |= base >> 1;
    base |= base >> 2;
    base |= base >> 4;
    base |= base >> 8;
    base |= base >> 16;
    base |= base >> 32;
    ++base;

    // Complexity O(N)
    // TODO: need improvement by using one of the following methods.
    // 1. 64-bit IEEE float (better)
    // 2. a lookup table (good)
    // 3. multiply and lookup (awesome!)
    unsigned pos = 0;
    while (base >>= 1)
        ++pos;

    return pos * expo <= 320;
}
double Fast_ipow::ipow()
{

    unsigned short sequenceLength = sizeof(unsigned short) * CHAR_BIT;

    // Accumulating the final result in a lovely double type for the sake of extended range and ease of scientific representation.
    double result = static_cast<double>(iBase);

    bool disable = false;
    bool isReachedTo_1 = false;

    while (sequenceLength--)
    {

        bool bit;
        bit = (iExponent >> sequenceLength) & 1U;
        if (!disable && bit)
        {
            isReachedTo_1 = true;
            disable = true;

            // skip the first encountered 1 bit and examine the rest
            continue;
        }

        if (isReachedTo_1)
        {
            result *= result;

            if (bit)
                result *= iBase;
        }
    }
    return result;
}

int main()
{

    string iExp;
    string iBase;

    cout << "Enter positive integer for base and exponent.\n";
    cout << "Base: ";
    cin >> iBase;
    cout << "Exponent: ";
    cin >> iExp;

    Fast_ipow fp(iBase, iExp);
    cout << endl
         << iBase << "^" << iExp << " = " << fp.ipow() << endl;
}