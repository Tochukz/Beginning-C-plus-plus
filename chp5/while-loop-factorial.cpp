#include <iostream>
#include <iomanip>

int main() {
	unsigned int limit {};
	std::cout << "Enter a number to see fatorials and sums: ";
	std::cin>> limit;

	std::cout << std::setw(8) << "Number" << std::setw(8) << "Sum" << std::setw(20) << "Factorial" << std::endl;

    unsigned int sum {};
    unsigned long long int factorial {1ULL};
    unsigned int n {};
	while(++n <= limit) {
      sum += n;
      factorial *= n;
      std::cout << std::setw(8) << n << std::setw(8) << sum << std::setw(20) << factorial << std::endl;     
	}
} 