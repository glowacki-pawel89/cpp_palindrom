#include <iostream>

bool isPalindrome(const std::string & word)
{
    std::string reversed = std::string(word.rbegin(), word.rend());
    return word == reversed;
}

std::string makeLowerWithoutSpaces(const std::string & base)
{
    std::string lowered;
    for(auto l: base) {
        if(l != ' ') {
            lowered += std::tolower(l);  
        }
    }
    return lowered;
}

int main()
{
    std::string input;
    std::string modifiedInput;
    std::cout << "Wprowadz zdanie\n";
    std::getline(std::cin, input);
    modifiedInput = makeLowerWithoutSpaces(input);
    if(isPalindrome(modifiedInput))
    {
        std::cout << "Wprowadzone slowo jest palindromem";
    }
    else
    {
        std::cout << "Wprowadzone slowo nie jest palindromem";
    }
    return 0;
}
