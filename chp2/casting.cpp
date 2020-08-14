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

    cout << "Total Score Int = " << totalScoreI << endl;
    cout << "Total Score Float = " << totalScoreF << endl;
    cout << "TotalA = " << totalA << endl;
    cout << "ToTalB = " << totalB << endl;

    printf("Smalest short = %d \n", smallestShort);
    printf("Smallest float = %f \n", smallestFloat);
    printf("Smllest Negative Float = %f \n", smallestNegativeFloat);
    printf("Biggest Int =  %d \n", bigestInt);

    printf("Positive Infitnity = %f \n", positive_infinity);
    printf("Negative Infinity =  %f \n", negative_infinity);
    printf("Not a Number = %f \n", not_a_number);
}