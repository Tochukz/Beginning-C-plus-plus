#include <iostream>

int main() {
    // Defining a type alias
    using BigNumber = unsigned long long;
    BigNumber richestMan = 10000e10L;

   // Defining a type alias using the old syntax
   typedef unsigned long long BigMoney;
   BigMoney richestChild = 10000e5L;


   printf("Richest Man worth %d \n", richestMan); // Richest Man worth 276447232 
   printf("Richest Child worth %d \n", richestChild); // Richest Child worth 1000000000 
}