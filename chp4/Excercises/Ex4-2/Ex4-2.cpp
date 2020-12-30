#include <iostream>

int main() {
    int number1 {};
    int number2 {};

    std::cout << "Enter first positive number: ";
    std::cin >> number1;

    std::cout << "Enter second positive number: ";
    std::cin >> number2;

    if (number1 < 1 || number2 < 1) {
        std::cout << "Invalid input: Both numbers must be positive and non zero" << std::endl;
        return 0;
    } 
       
    if (number1 > number2 && number1 % number2 == 0) {
      std::cout << number1  << " is a mutiple of " << number2 << std::endl;
    } else if (number2 > number1 && number2 % number1 == 0) {
      std::cout << number2 << " is a mutiple of " << number1 << std::endl;
    } else {
      std::cout << "Non of the numbers is a multitple of the other "<< std::endl;
    }
}