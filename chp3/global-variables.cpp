#include <iostream>

int value1 {5};

int main() {
    int value1 {};
    value1 = 10;
    int globalVal1 = ::value1;
    {
        int value1 {};
        value1 = 20;
        std::cout << "\nInner Local Value1 = " << value1 << std::endl; // Inner Local Value1 = 20
    }
    std::cout << "\nGlobal value1 =  " << globalVal1; // Global value1 =  5 
    std::cout << "\nGlobal value1 =  " << ::value1;   // Global value1 =  5 
    std::cout << "\nLocal Value1 = " << value1        // Local Value1 = 10
    << std::endl;
}

/**
Global variables have zero-initialized by default if they are uninitialized and they hva estatic storage duration.
Only global variabled have defaults, local/automatic variabled do not have default, they have garbage values when uninitialized.
**/