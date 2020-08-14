#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    float radius {}, area {};
    float pi { 3.14286 };
    
    std::cout << "Enter the radius of the circle to calculate it's area: " << std::endl;
    std::cin >> radius; 
    
    area = pi * pow(radius, 2);
 
    std::cout << "Area of circle of radius " 
               << radius << " is " 
               << std::fixed 
               << std::setprecision(2) << area 
               << std::endl;

   printf( "Area of circle of radius %2f is %2f\n", radius, area);
}