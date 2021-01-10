//  Binary message

#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// This code is to answer the question
// How can I convert my sentances into binary.

int main()
{
    string message = "How can I convert my sentances into binary?";
    string binarymessage = "";

    for (unsigned int x = 0; x < message.length(); x++)
    {
        bitset<(sizeof(char) * 8)> charbits(message.at(x));
        binarymessage.append(charbits.to_string<char, string::traits_type, string::allocator_type>());
    }

    cout << binarymessage << '\n';

    return 0;
}
