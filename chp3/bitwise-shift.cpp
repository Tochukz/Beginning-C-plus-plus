#include <iostream>
#include <bitset>

int main() {    
    unsigned short price { 16387 };
    auto leftShiftedPrice { static_cast<unsigned short>(price << 2) }; // shift left 2 bit position
    auto rightShitedPrice { static_cast<unsigned short>(price >> 2) }; // shift right 2 bits position
    
    // cast short type to 16 bits binary string
    std::string binaryPrice { std::bitset<16>(price).to_string() }; 
    std::string binaryLeftShiftedPrice { std::bitset<16>(leftShiftedPrice).to_string() };
    std::string binaryRightShiftedPrice { std::bitset<16>(rightShitedPrice).to_string() };

    // composite shift operators
    unsigned short number1 { 16387 };
    unsigned short number2 { 16387 };
    number1 <<= 2;  // same as: number1 = static_cast<unsigned short>(number1 << 2);
    number2 >>= 2; 
    
    // signed char
    signed char value1 { -104 }; 
    signed char value2 { -104 };
    value2 >>= 2; // right shift 2 bit.  Note
    
    std::string binaryValue1 { std::bitset<8>(value1).to_string() }; // remember that negative number is represented in binary using two's complements notation
    std::string binaryValue2 { std::bitset<8>(value2).to_string() };

    printf("price %d \n", price);                          // price 16387 
    printf("left shifted price %d \n", leftShiftedPrice);  // left shifted price 12 
    printf("right shifted price %d \n", rightShitedPrice); // right shifted price 4096

    std::cout << binaryPrice << std::endl;             // 0100 0000 0000 0011
    std::cout << binaryLeftShiftedPrice << std::endl;  // 0000 0000 0000 1100
    std::cout << binaryRightShiftedPrice << std::endl; // 0001 0000 0000 0000

    printf("number1 = %d \n", number1); // number1 = 12
    printf("number2 = %d \n", number2); // number2 = 4096

    std::cout << binaryValue1 << std::endl; // 1001 1000
    std::cout << binaryValue2 << std::endl; // 1110 0110
}

/* 
* Numbers are implicitly promoted to a value of type int prior to shitfting. 
* Also, the shifting operation return a type of int, hence the need for the explicit cast to avoid a narrowing implicit conversion which result in a warning or error.
*
* Note that shfting right 2 bits effectively divides the value by 4. 
* As long as bits are not lost, shifting n bits to the left is equivalent to multipling by 2n.
* Similarly, sifting right n bits is equivalent to diving by 2n.
*
* What happens when you right-shift negative integers is dependent on your compiler's implementation. 
* You should always use unsigned integers to ensure that you avoid the high-order bit being propagated.   
*/