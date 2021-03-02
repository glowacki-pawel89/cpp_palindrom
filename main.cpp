#include <iostream>

bool isPalindrome(const std::string & word)
{
    std::string reversed = std::string(word.crbegin(), word.crend());
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
        std::cout << "Wprowadzone zdanie jest palindromem";
    }
    else
    {
        std::cout << "Wprowadzone zdanie nie jest palindromem";
    }
    return 0;
}
