#include <iostream>
#include <bitset>

int main() {
    unsigned char first {};
    unsigned char second {};
    unsigned char third {};
    unsigned char fourth {};

    auto container { 1u };

    // Reading characters from the keyboard
    std::cout << "First Character: ";
    std::cin >> first;

    std::cout << "Second Character: ";
    std::cin >> second;

    std::cout << "Third Character: ";
    std::cin >> third; 

    std::cout << "Fourth Character: ";
    std::cin >> fourth;

    // Packing all read characters into a single variable
    container = (container << 8)  | first;
    container = (container << 8)  | second;
    container = (container << 8 ) | third;
    container = (container << 8)  | fourth;


    // Printing out character in binary form
    std::cout << first << " = " << std::bitset<8>(first).to_string();
    std::cout << "\n" << second << " = " << std::bitset<8>(second).to_string();
    std::cout << "\n" << third << " = " << std::bitset<8>(third).to_string();
    std::cout << "\n" << fourth << " = " << std::bitset<8>(fourth);
    std::cout << "\nCombined " << " = " << std::bitset<32>(container) << std::endl;

    // Prining out characters in hexadecimal
    std::cout << std::hex;
    std::cout << first << " = " << static_cast<unsigned int>(first);
    std::cout << "\n" << second << " = " << static_cast<unsigned int>(second);
    std::cout << "\n" << third << " = " << static_cast<unsigned int>(third);
    std::cout << "\n" << fourth << " = " << static_cast<unsigned int>(fourth);
    std::cout << "\nPacked Bytes: " << std::showbase << container  << std::endl;

    // Unpacking the byes from then container 
    unsigned fourthMask =  ~(~0u << 8); // 00000000000000000000000011111111
    unsigned short fourthByte = container & fourthMask;
    unsigned short thirdByte = (container >> 8) & fourthMask;
    unsigned short secondByte = (container >> 16) & fourthMask;
    unsigned short firstByte = (container >> 24) & fourthMask;

    // Printing out the characters
    std::cout << "Characters: " << char(fourthByte) << " ";
    std::cout << char(thirdByte) << " ";
    std::cout << char(secondByte) << " ";
    std::cout << char(firstByte) << std::endl;  
}

