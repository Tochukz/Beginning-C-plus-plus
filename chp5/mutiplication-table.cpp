#include <iostream>
#include <iomanip>
#include <cctype>

int main() {
	char reply {};
	size_t table_min {2};
	size_t table_max {20};
	size_t table_size {};
	do {
        std::cout << "Enter a table size between " << table_min << " and " << table_max << ", inclusive : ";
        std::cin >> table_size;

        while (table_size < table_min || table_size > table_max) {
        	std::cout << "Table size must be between " << table_min << " and " <<  table_max << ", inclusive. Try again: ";
        	std::cin >> table_size;        
        }
         
        // Create table header
        std::cout << " " << std::setw(5) << " |";
        for (int n {1}; n <= table_size;  n++) {
        	std::cout << " " << std::setw(3) << n << " |";
        }
        std::cout << std::endl;
        
        // Create table header-body separator
        for (int n {}; n <= table_size; n++) {
        	std::cout << "------";
        }
        std::cout << std::endl;

        // multiplication table body 
        for (int x {1}; x <= table_size; x++) {
            std::cout << " " << std::setw(3) << x << " |";
        	for (int y {1}; y <= table_size; y++) {

        		std::cout << " " << std::setw(3) << x*y << " |";
        	}
        	std::cout << std::endl;
        }

        std::cout << "Do you want another table (y/n)? ";
        std::cin >> reply;

	} while(std::tolower(reply) == 'y');
	printf("Good bye!");
}
