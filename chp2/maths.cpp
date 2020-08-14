#include <cmath>
#include <iostream>
#include <iomanip>

int main() 
{
    double pi {22/7};
    double deg { (2 * pi) / 360}; // conversion factor for rad to degree
    
    double up1 { ceil(1.5) }; // 2.000000
    double up2 { ceil(-1.5)}; // -1.000000
    double down1 { floor(1.6)}; // 1.000000
    double down2 { floor(-1.6) }; // -2.000000
    double approx { round(14.578) }; // 15.000000
    
    double rad60 { 60 * deg}; // converts degree to radians - 60rad = 1.000000
    double cos60 { cos(60 * deg)}; // 0.540302
    double sin30 { sin(30 * deg)}; // 0.479426
    double tan45 { tan(45 * deg)}; // 0.931596

    double sqrt16 { sqrt(16) }; // 4.000000
    double sq5 { pow(5, 2) }; // 25.000000
    
    int octInt { 057 };
    int hexInt { 0x8fa };

    
    printf("up1 = %f, up2 = %f, down1 = %f, down2 = %f, approx = %f \n", up1, up2, down1, down2, approx);
    printf("60rad = %f\n", rad60);
    printf("cos60 = %f, sin30 = %f, tan45 = %f \n", cos60, sin30, tan45);
    printf("Sqrt16 = %f, Sq5 = %f \n", sqrt16, sq5);
    

   std::cout << "cos60 = " << std::setprecision(2) << cos60 << std::endl; // set precision to 2 decimal places
   std::cout << "sin30 = " << std::fixed << std::setprecision(2) << sin30 << std::endl; // set precision to 2 decimal places
   std::cout << "tat45 = " << std::scientific << tan45 << std::endl; // set precision to 2 decimal places with exponetiation

   std::cout << "Oct Integer: " << octInt << std::endl; // Oct Integer: 47
   std::cout << "Hex Integer: " << hexInt << std::endl; // Hex Integer: 2298 
   std::cout << "Oct Int in Oct: " << std::oct << octInt << std::endl; // Oct Int in Oct: 57
   std::cout << "Oct Int with 0 prefix: " << std::oct << std::showbase << octInt << std::endl; // Oct Int with 0 prefix: 057
   std::cout << "Hex Int with 0x prefix: " << std::hex << std::showbase << hexInt << std::endl; // Hex Int with 0x prefix: 0x8fa


}