#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x {5};
    double y {1.5};
    double z {};

    double xDivz = {x/z};
    double infPlus  { xDivz + y};
    double zDivz {z/z};

    bool first { isinf(xDivz) };
    bool second { isinf(y) };
    bool third { isnan(zDivz) };

    cout << x << "/" << z << " = " << xDivz << endl; // 5/0 = inf
    cout << "Infinitiy + " << y << " = " << infPlus << endl; // Infinitiy + 1.5 = inf
    cout << z << "/" << z << "= " << zDivz << endl; // 0/0= nan 
    printf("first = %d, second = %d, third = %d", first, second, third); // first = 1, second = 0, third = 1

}