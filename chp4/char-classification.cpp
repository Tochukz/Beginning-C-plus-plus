#include <iostream> 
#include <cctype>  

int main() {
    char letter {};

    std::cout << "Type a letter: ";
    std::cin >> letter;

    if (std::isupper(letter)) {
        std::cout << "You typed an uppercase letter!";
        std::cout << "\nThe lowercase equivalent is " << static_cast<char>(tolower(letter)) << std::endl;
    } else if (std::islower(letter)) {
        std::cout << "You typed a lowercase letter!";
        std::cout << "\nThe uppercase equivalent is " << static_cast<char>(toupper(letter)) << std::endl;
    } else {
        std::cout << "You did not type a letter!" << std::endl;
    }
}

/**
Other useful functions provided by the cctype header includes isdigit(), isxdigit(), isapha(), isalnum() etc. 
They are return a value of 0 or 1.
cctype heade also provides the tolower() and toupper() functinn to convert between letter case.  
The tolower() and toupper() functions returns int and must be cast to char is needed.
**/