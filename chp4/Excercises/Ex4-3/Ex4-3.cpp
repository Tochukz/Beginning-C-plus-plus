#include <iostream>

int main() {
    double number {};

    std::cout << "Enter a number (non integral numbers are allowed) bwteeen 1 and 100: ";
    std::cin >> number; 

    if (number > 0 && number <= 100) {
      if (number < 50) {
         std::cout << number << " is less than 50 " << std::endl;
      } else if (number > 50) {
         std::cout << number << " is more that 50 " << std::endl;
      } else {
          std::cout << number << " is exactly " << std::endl;
      }

      return 0;
    }

    std::cout << "Invalid input: number must be between 1 and 100" << std::endl;
}