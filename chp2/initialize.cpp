#include <iostream>

int main()
{
    int i; // ddefaults to 4200907
    int j {}; // defaults to 0.  This is true for all numeric types

    /* Using the braced initializer*/
    int x {10};

    /* Initialize variable using functional notation */
    int y(20);

    /* Using the assingment notation */
    int z = 100;

    /* Perform arrithmethic operation using all three initilization syntax */
    int xy {x + y}; // using braced initilizer
    int xz(x + z);  // using functional notation
    int yz = y + z; // using assignment operator

    /* The compiler will issue a warning for this narrowing conversion*/
    int totalX {x + 3.142};

    /* The compiler will NOT issue any warning for these narrowing conversions */
    int totalY(y + 3.142);
    int totalZ = z + 3.142;

    /* Definining constants */
    const unsigned months {12}; // the unsigned modifier is shorthand for unsigned int 
    const double avogrado {6.02E23};


    std::cout << "x + pi = " << totalX << std::endl;
    std::cout << "y + pi = " << totalY << std::endl;
    std::cout << "z + pi = " << totalZ << std::endl;
    std::cout << "Avogrado number = " << avogrado << std::endl;
}

/* 
* The braced initializer is the recommended syntax. 
* It is commomly refered to as uniform initialization because it enables you to initialize ust about anything. 
* It is also safer when it comes to narrowing conversions bacause brace initializer syntax with  at least throw an error for a narrrowing conversion.
*/