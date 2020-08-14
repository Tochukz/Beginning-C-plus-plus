#include <iostream>

/*
using std::cout;
using std::cin;
using std::endl;
*/
using namespace std;

/** Height-Weight Converter */
int main()
{
    float heightInFeets {}, weightInPounds {}, heightInMeters {}, weightInKg {};
    const float foot {0.3048}; // 1 foot = 0.3048m
    const float pound {0.453592}; // 1 pond = 0.453592kg

    cout << "Type a person's height in feets and the weight in pounds "
         << "You will get their equivalent in meters and kilograms respectively."
         << endl;
    
    /* std::cin >> heightInFeets >> weightInPounds; */
    cin >> heightInFeets;
    cin >> weightInPounds; 

    heightInMeters = heightInFeets * foot;
    weightInKg = weightInPounds * pound;

    cout << heightInFeets << "feets and "  << weightInPounds << "pounds " 
         << " is quivalent to "
         << heightInMeters << "m and " << weightInKg << "kg" 
         << endl;
}