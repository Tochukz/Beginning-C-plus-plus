#include <iostream>
#include <iomanip>

int main() {
    char first {};
    char second {};

    std::cout << "Enter your first character: ";
    std::cin >> first;

    std::cout << "Enter your second character: ";
    std::cin >> second;

    std::cout << std::boolalpha;
    std::cout << first << " < " << second << " is " << (first < second) << std::endl;
    std::cout << first << " = " << second << " is " << (first == second) << std::endl;

    std::cout << std::noboolalpha;
    std::cout << first << " != " << second << " is " << (first != second) << std::endl;

}
/**
 Characters are mapped to integral codes using standard encoding schemes such as ASCII and Unicode.  
 When you compare characters their underling integer code is compared to obtain a result.
**/