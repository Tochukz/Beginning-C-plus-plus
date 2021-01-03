#include <iostream>
#include <iomanip>
#include <array>

int main()  {
	const size_t size {10};
	double numbers[size] {};
	double input {};

    std::cout << "Enter a list of non-zero numbers to get them sorted (entering zero ends the list). \n"<< std::endl;
    std::cout << "Enter your first number  ";
    std::cin >> input;
    numbers[0] = input;
    size_t x = 1;
	while(x < size) {
		std::cout << "Enter another number or zero to terminate list: ";
		std::cin >> input;
		if (input == 0) {
			break;
		}
		if (x == size - 1) {
            printf("Maximum number (%d) of inputs has been reached! \n", size);
		}
		numbers[x] = input;
		x++;
	}

    if (x <= 1) {
       printf("Not enough number to sort! \n");
       return 1;
    }
    printf("Sorting numbers...\n");
	while (true) {
		bool swapped { false };
		// (x-1) wil be problematic if x = 0 because of the circular effect of the size_t type 
		// that is why the check if (x <= 1) above is very important
        for (size_t i {}; i < x - 1; i++) {
        	if (numbers[i] > numbers[i+1] ) {
                auto temp = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = temp;
                swapped = true;
        	}
        }
        if (swapped == false) {
        	break;
        }
	}


    std::cout << "Numbers sorted in ascending order: \n";
    std::cout << std::fixed << std::setprecision(2);
	for (size_t i {}; i < std::size(numbers); i++) {
		if (!numbers[i]) {
          continue;
		}
        std::cout << std::setw(8) << numbers[i];
	}
	std::cout << std::endl;
}

/**
This sorting method is called the bubble sort because elements 
gradually "bubble up" to their correct position in the array.  
It's not the most efficent sorting method, but it has the merit 
that is is very easy to understand.
**/