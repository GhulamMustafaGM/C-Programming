// Reverse input with a stack

#include <iostream>
#include <stack>

int main()
{
    //create a stack of chars
    std::stack<char> word;
    char ch;

    std::cout << "enter anything: ";

    /*get chars and push to stack. Use     
      cin.get(ch) out of code playground.Next
      line not needed*/
    std::cin >> std::ws;

    while (std::cin.get(ch) && ch != '\n')
        word.push(ch);

    /*while stack not empty print top char from     
      stack then remove it*/
    while (!word.empty())
    {
        std::cout << word.top();
        word.pop();
    }

    std::cout << std::endl;
    return 0;
}