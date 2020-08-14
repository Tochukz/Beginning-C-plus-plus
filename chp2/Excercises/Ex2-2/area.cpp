#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double radius {}, dp {}, area {};
    double pi {3.141592653589793238};

    cout << "Enter a radius and sumber of decimal place of area calculated: " << endl;
    cin >> radius >> dp;
    
    area = pi * pow(radius, 2);

    cout << " Area of circle of radius " 
         << radius  
         << " is " << fixed
         << setprecision(dp) 
         << area 
         << endl; 
}