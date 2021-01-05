
#include <iostream>
#include <iomanip>

int main() {
	int limit;
	std::cout << "This program will output the sqare of all odd numbers up to your choosen limit. \n";
	std::cout << "Enter your choosen limit: ";
	std::cin >> limit;

    int i {1};
    int rowCount {};
	while(i <= limit) {
		std::cout << std::setw(6) << i * i;
		rowCount++;

		if (rowCount % 10 == 0) {
          std::cout << std::endl;
		}

		i += 2;
	}
    std::cout << std::endl;
}