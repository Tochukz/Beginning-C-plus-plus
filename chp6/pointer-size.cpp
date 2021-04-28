#include <iostream>

int main() {
	std::cout << sizeof(double) << " > " << sizeof(char) << std::endl;   // 8 > 1
	std::cout << sizeof(double*) << " = " << sizeof(char*) << std::endl; // 4 = 4
}

/**
For nearly all platforms today, the size of pointer variables will be either 4 or 8 bytes 
for 32- and 64-bit computer architectures respectively.
**/