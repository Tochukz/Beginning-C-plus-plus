#include <iostream>
#include <iomanip> 

int main() {
	unsigned int limit {};

	std::cout << "Enter a number as a limit: ";
	std::cin >> limit;

    std::cout << std::setw(8) << "Number" << std::setw(8) << "Sum" << std::setw(20) << "factorial " << std::endl;
	for (unsigned long long n {1}, sum{}, factorial {1}; n <= limit; n++) {
		sum += n;
		factorial *= n; 
		std::cout << std::setw(8) << n << std::setw(8) << sum << std::setw(20) << factorial << std::endl; 
	}
}

/**
Note that there will be no warning if a factorial value cannot be accommodated in the memory allocated; the
result will just be incorrect.
**/