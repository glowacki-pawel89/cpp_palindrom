#include <iostream>

std::string isPalindrome(std::string word) {
    std::string reversed = std::string(word.rbegin(), word.rend());
    return word == reversed ? "Wprowadzone slowo jest palindromem" : "Wprowadzone slowo nie jest palindromem";
}

int main()
{
    std::string input;
    std::cout << "Wprowadz slowo\n";
    std::cin >> input;
    std::cout << isPalindrome(input);
    return 0;
}
