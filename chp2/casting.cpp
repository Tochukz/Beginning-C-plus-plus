#include <iostream>
#include <limits>

using namespace std;

int main()
{
    double mathScore {96.7};
    double phyScore  {94.6};

    int totalScoreI { static_cast<int> (mathScore + phyScore) }; // 191
    float totalScoreF { static_cast<float> (mathScore + phyScore) }; // 191.3

    /* Using old-style cast. Also known as c-style cast */
    int totalA { (int) (mathScore + phyScore) }; // 191
    float totalB { (float) (mathScore + phyScore) }; // 193

    /* finding limits pf various numeric types*/
    short smallestShort { numeric_limits<short>::min() };
    float smallestFloat { numeric_limits<float>::min() };
    float smallestNegativeFloat { numeric_limits<float>::lowest() };
    int bigestInt { numeric_limits<int>::max() };

    float positive_infinity = numeric_limits<float>::infinity();
    double negative_infinity = -numeric_limits<double>::infinity();
    long double not_a_number = numeric_limits<long double>::quiet_NaN();

    cout << "Total Score Int = " << totalScoreI << endl;   // Total Score Int = 191
    cout << "Total Score Float = " << totalScoreF << endl; // Total Score Float = 191.3
    cout << "TotalA = " << totalA << endl;                 // TotalA = 191
    cout << "ToTalB = " << totalB << endl;                 // ToTalB = 191.3

    printf("Smalest short = %d \n", smallestShort);                  // Smalest short = -32768
    printf("Smallest float = %f \n", smallestFloat);                 // Smallest float = 0.000000
    printf("Smllest Negative Float = %f \n", smallestNegativeFloat); // Smllest Negative Float = -340282346638528860000000000000000000000.000000
    printf("Biggest Int =  %d \n", bigestInt);                       // Biggest Int =  2147483647

    printf("Positive Infitnity = %f \n", positive_infinity);         // Positive Infitnity = 1.#INF00
    printf("Negative Infinity =  %f \n", negative_infinity);         // Negative Infinity =  -1.#INF00
    printf("Not a Number = %f \n", not_a_number);                    // Not a Number = -2.000000
}
