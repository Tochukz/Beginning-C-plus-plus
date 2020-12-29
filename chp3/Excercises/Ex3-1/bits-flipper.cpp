#include <iostream>
#include <iomanip>  
#include <bitset>

int main() {
    unsigned short original {};
    unsigned short flipped {};
    unsigned short flippedPlus;

    std::cout << "Enter a number and it bits will be flipped: " << std::endl;
    std::cin >> original;
       
    flipped = static_cast<unsigned short> ( ~original );
    flippedPlus = static_cast<unsigned short> (flipped + 1);

    // Printing as hexadecimal
    std::cout << std::hex << std::setfill('0');
    std::cout << "\nOriginal Hex = " << std::setw(8) << original;
    std::cout << " Flipped Hex = " << std::setw(8) << flipped;
    std::cout << " Flipped Plus " << std::setw(8) << flippedPlus << std::endl;

    // Prining as decimal
    std::cout << std::dec << std::setfill(' ');
    std::cout << "Original Dec = " << std::setw(8) << original;
    std::cout << " Flipped Dec = " << std::setw(8) << flipped;
    std::cout << " Flipped Plus "  << std::setw(8) << flippedPlus <<  std::endl;

}