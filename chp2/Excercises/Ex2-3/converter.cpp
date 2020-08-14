#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int length {};
    int conversionFactor { 12 };
    printf("Enter a length in inches to get the equivalent in feet: ");
    
    std::cin >> length;

    int feets { static_cast<int> (length / 12) };
    int inches { (length % 12) };

    printf("Length of %d inches = %d feet, %d inches ", length, feets, inches);

}