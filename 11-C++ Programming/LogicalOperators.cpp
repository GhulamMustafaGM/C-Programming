// Logical operators, three and, or, not

/*Goal: understand the logical operators supported by C++
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;

    string TorF[] = {"False", "True"};

    //The && operator
    cout << "A == C is " << TorF[A == C];
    cout << "\n(B == D) is " << TorF[B == D];
    cout << "\n(B > D) is " << TorF[B > D];

    //A true && false = false
    cout << "\n\n(A ==C) && (B == D) is " << TorF[(A == C) && (B == D)];

    //A true and true = true
    cout << "\n(A ==C) && (B > D) is " << TorF[(A == C) && (B > D)];

    //The || operator
    //A true || false = true
    cout << "\n\n(A ==C) || (B == D) is " << TorF[(A == C) || (B == D)];
    //A true || true = true
    cout << "\n(A ==C) || (B > D) is " << TorF[(A == C) || (B > D)];

    //The 'Not' operator
    cout << "\n\nA < B is " << TorF[A < B];
    cout << "\n!(A < B) is " << TorF[!(A < B)];

    cout << "\n\nA == C is " << TorF[A == C];
    cout << "\n!(A == C) is " << TorF[!(A == C)];
    cout << "\n";

    return 0;
}

/* output 

A == C is True
(B == D) is False
(B > D) is True

(A ==C) && (B == D) is False
(A ==C) && (B > D) is True

(A ==C) || (B == D) is True
(A ==C) || (B > D) is True

A < B is False
!(A < B) is True

A == C is True
!(A == C) is False