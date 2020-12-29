#include <iostream>  

int main() {
    auto k { 430u};
    auto j {(k >> 4) & ~(~0u << 3)};
    std::cout << j << std::endl;
}


/**
Without running it, can you work out what the above code snippet will produce as output?
**/