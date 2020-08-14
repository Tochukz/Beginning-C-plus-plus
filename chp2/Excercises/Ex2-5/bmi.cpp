#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int pounds {}, feets {};   
    double poundsToKg {0.453592};
    float feetsToMeters {0.3048};
    printf("Enter your weight in pound and heigth in feets to get you Body Mass Index (BMI): ");

    std::cin >> pounds >> feets;
    double weight { poundsToKg * pounds };
    double heigth { feetsToMeters * feets };
    double bmi { weight / pow(heigth , 2)};

    std::cout << "Your BMI is " 
              << std::fixed << std::setprecision(2) 
              << bmi << std::endl;
}