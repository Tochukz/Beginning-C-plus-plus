#include <iostream> 
#include <cmath>
#include <iomanip>

int main()
{
    double number1 {}, number2 {};

    printf("Enter two numbers and I will distinguish the smaller from the bigger number: ");
    
   
    std::cin >> number1 >> number2;
    double bigger { fmax(number1, number2)};
    double smaller { fmin(number1, number2)};

    printf("%f is greater and %f is lesser", bigger, smaller);
}