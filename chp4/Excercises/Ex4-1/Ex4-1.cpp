#include <iostream>

int main() {
    int number1 {};
    int number2 {};

    std::cout << "Enter first nubmer: ";
    std::cin >> number1;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    if (number1 == number2) {
        std::cout << number1 << " = " << number2 << std::endl;
        return 0;
    }
    std::cout << number1 << " <> " << number2 << std::endl;
}