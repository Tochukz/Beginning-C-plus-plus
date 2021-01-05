#include <iostream>
#include <cctype>

int main() {
	float total {};
	int count {};
    float number {};
    char yesOrNo {};

    printf("This program will compute the sum and average of a list of numbers you enter. \n");
    std::cout << "Enter your first number: ";
    std::cin >> number;
   
    total += number;
    count++;
    while(yesOrNo != 'n'){
      std::cout << "Do you want to continue? (y/n) ";
      std::cin >> yesOrNo;
      yesOrNo = std::tolower(yesOrNo);

      if (yesOrNo == 'y') {
        std::cout << "Enter another number: ";
        std::cin >> number;
        total += number;
        count++;
      }
    }
    
    printf("Total: %f \n", total);
    printf("Average %f\n", total / count);
}