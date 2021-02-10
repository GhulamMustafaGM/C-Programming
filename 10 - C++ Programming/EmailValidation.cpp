// email validation

#include <iostream>
#include <regex>
#include <string>
//using namespace std;

int main()
{

    std::regex exp("[a-zA-Z]+\\d*@(yahoo|gmail|outlook|hotmail).(com|ca|in)");

    std::string input;

    std::cin >> input;

    if (std::regex_match(input, exp, std::regex_constants::match_not_eol))
        std::cout << input << " is valid email\nthanks for testing...";

    else
        std::cerr << input << " is invalid. please enter a valid email or gmail or outlook or hotmail\nthanks for testing...";

    return 0;
}
