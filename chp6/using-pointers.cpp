#include <iostream>
#include <iomanip>

int main() {
	int unit_price {295};
	int count {};
	int discount_threshold {25};
	double discount {0.07};

    int* pcount {&count}; // using the address-of operator
	std::cout << "Enter the number of items you want: ";
	std::cin >> *pcount; // using the indirection operator or dereference operator
	std::cout << "The unit price is $" << std::fixed << std::setprecision(2) << unit_price/100.0 << std::endl;

	// Calculate the gross price using pointer
	int* punit_price {&unit_price}; 
	int price {*punit_price * *pcount};
	auto* pprice {&price};

	// Calculate net price in US$
	double net_price {};
	double* pnet_price {nullptr}; // expliciting initializing a pointer with nullptr i.e the zero equivalent for pointers
	pnet_price = &net_price;

	if (*pcount > discount_threshold)  { // By dereferencing pcount (i.e *pcount) we use the value in the address of pcount directly
        std::cout << "You qualify for a discount of " << static_cast<int>(discount * 100) << " percent.\n";
        *pnet_price = price * (1 - discount) / 100.0;
	} else {
		net_price = *pprice / 100.0;
	}
	std::cout << "The net price for " << *pcount << " items is $" << net_price << std::endl;

}

/**
This example demonstrate that using a dereferenced pointer is the same as using the variable to which it points.
You can use a dereferenced pointer in an expression in the same way as the original variable.
**/