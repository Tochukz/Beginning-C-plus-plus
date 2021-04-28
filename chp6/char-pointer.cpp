#include <iostream>

int main() {
	// char* pstar1 {"Fatty Arbuckle"}; // Old way (deprecated) to initialize pointer-to-const. The string literal is implicitly made a constant 
	const char* pstar1 {"Fatty Arbuckle"}; // New way to initalize pointer-to-const
	const char* pstar2 {"Clara Bow"};
	const char* pstar3 {"Lassie"};
	const char* pstar4 {"Slim Pickens"};
	const char* pstar5 {"Boris Karloof"};
	const char* pstar6 {"Mae West"};
	const char* pstar7 {"Oliver Hardly"};
	const char* pstar8 {"Greta Garbo"};
	const char* pstr {"Your lucky star is "};

	std::cout << "Pick a lucky star! Enter a number beteen 1 and 8: ";
	size_t choice {};
	std::cin >> choice;
	switch(choice) {
		case 1:
		  std::cout << pstr << pstar1 << std::endl;
		  break;
		case 2:
		  std::cout << pstr << pstar2 << std::endl;
		  break;
		case 3:
		  std::cout << pstr << pstar3 << std::endl;
		  break;
		case 4:
		  std::cout << pstr << pstar4 << std::endl;
		  break;
		case 5:
		  std::cout << pstr << pstar5 << std::endl;
		  break;
		case 6:
		  std::cout << pstr << pstar6 << std::endl;
		  break;
		case 7:
		  std::cout << pstr << pstar7 << std::endl;
		  break;
		case 8:
		  std::cout << pstr << pstar8 << std::endl;
		  break;
		default:
		  std::cout << "Sorry, you haven't got a lucky star." << std::endl;
		  break;
	}
}

/**
The insertion operator << for cout treats pointers differently, depending on their type.  
For example the pointer-to-const do not need to be dereferenced in this example.  
On the other hand, a pointer to a numeric type must be dereferenced to output the value to which it points.
**/