#include <iostream>
#include <iomanip>
#include <array>

int main() {
    double scores[7] { 78.5, 60.6, 78.5, 63.9, 59.3, 63.2, 47.4};
    double scoresPlus5[7] {};

    double totalScore {};   
    for (size_t i {}; i < std::size(scores); i++) {
      totalScore += scores[i];
      scoresPlus5[i] = scores[i] + 5;
      printf("Score %d = %.2f \n", i, scores[i]);
    }
    printf("Fifth score = %f \n", scoresPlus5[4]); // Fifth score =  64.300000
    printf("Total Score = %f \n", totalScore); // Total Score = 451.400000

    // Omitting the initialization statement in a for loop
    size_t j {};
    for ( ; j < 10; j++) {
      printf("j = %d \n", j);
    }
    printf("j = %d \n", j); // j = 10

    // The third control expression does two things
    totalScore = 0;
    for(size_t i = 0; i < std::size(scores); totalScore += scores[i++]);
    //for (size_t i = 0; i < std::size(scores); totalScore += scores[i++]) {}
    printf("Total Score = %f \n"); // Total Score = 451.399902

    // Loop using floating point values 
    const double pi { 3.14159265358979323846 };
    for (double radius { 2.5 }; radius <= 20.0; radius += 2.5) {
      std::cout << "Raduis = " << std::setw(12) << radius;
      std::cout << " Area = " << std::setw(12) << pi * radius * radius << std::endl;
    }  
}

/**
You need to be careful when using a floating-point variable to control a for loop. Fractional values may
not be representable exactly as a binary floating-point number. This can lead to some unwanted side effects.

Note Any number that is a fraction with an odd denominator cannot be represented exactly as a binary
floating-point value.

Caution Comparing floating-point numbers can be tricky. You should always be cautious when comparing
the result of floating-point computations directly using operators such as ==, <=, or >=. Rounding errors almost
always prevent the floating-point value from ever becoming exactly equal to the mathematical precise value.
**/