#include <iostream>
#include <iomanip>

int main() {
    unsigned int red { 0xFF0000u };
    unsigned int white { 0xFFFFFFu };
   
    std::cout << std::hex << std::setfill('0');
    std::cout << "Initial Color red = " << std::setw(8) << red; // Initial Color red = 00ff0000 
    std::cout << "\nComplement ~red = " << std::setw(8) << ~red; // Complement ~red = ff00ffff
    std::cout << "\nInitial Color white = " << std::setw(8) << white; // Initial Color white = 00ffffff
    std::cout << "\nComplement ~white = " << std::setw(8) << ~white;  // Complement ~white = ff000000 
    std::cout << "\nBitwise AND: red & white = " << std::setw(8) << (red & white); // Bitwise AND: red & white = 00ff0000
    std::cout << "\nBitwise OR: red | white = " << std::setw(8) << (red | white);  // Bitwise OR: red | white = 00ffffff

    // A mask that can be used to flip between red and white is obtained by XOR between red and white
    unsigned int mask { red ^ white};
    std::cout << "\nmask = red ^ white = " << std::setw(8) << mask; // mask = red ^ white = 0000ffff
    std::cout << "\nmask ^ red = " << std::setw(8) << (mask ^ red);  // mask ^ red = 00ffffff
    std::cout << "\nmask ^ white = " << std::setw(8) << (mask ^ white); // mask ^ white = 00ff0000
    
    unsigned int flags { 0xFF }; 
    unsigned int bit1mask { 0x1 };
    unsigned int bit6mask { 0b100000 };
    unsigned int bit20mask { 1u << 19}; 
    std::cout << "\nSelect bit 1 from flags: " <<std::setw(8) << (flags & bit1mask); // Select bit 1 from flags: 00000001
    std::cout << "\nSelect bit 6 from flags: " << std::setw(8) << (flags & bit6mask); // Select bit 6 from flags: 00000020
    std::cout << "\nSwitch off bit 6 from flags: " << std::setw(8) << (flags &= ~bit6mask); // Switch off bit 6 from flags: 000000df
    std::cout << "\nSwitch on bit 20 in flag: " << std::setw(8) << (flags |= bit20mask) // Switch on bit 20 in flag: 000800df
              << std::endl;
 
}

/**
 The std::hex manipulator makes all subsequent integer output to be in hexadecimal format.
 The std::setfill('0') manipulator makes fill the ouput with 0s up to the set width set by std::setw('n') 
 The std::hex and std::setfill manipulators are modals so they remain in effect until they are reset.
 The std::setw is not model, so you have to insert it into the stream before each output value
**/