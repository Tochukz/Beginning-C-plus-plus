#include <iostream>
#include <bitset>

int main() {
    unsigned short fontData {0b00000110'0'1'001100}; // 0000 0110 0100 1100 represents style of 6, italic, not bold and 12 point size 
    unsigned short hextFontData {0x064c}; // The hexadecimal equivalent of the font data

    // Using bitwise AND and right-shift operator to extract the style from the fontData
    unsigned short styleMask {0b111111'0'0'00000}; // 1111 1111 0000 0000
    unsigned short styleMaskingResult {static_cast<unsigned short>(fontData & styleMask)}; // 0000 0110 0000 0000
    unsigned styleValue { static_cast<unsigned short>(styleMaskingResult >> 8) };
    std::string styleValueStr { std::bitset<16>(styleValue).to_string()} ;
    printf("Style value = %d \n", styleValue); // Style value = 6
    std::cout << styleValueStr << std::endl; // 0000 0000 0000 0110

    // Using bitwise & operator to size from the font data
    unsigned short sameFontData {0b0000'0110'0100'1100}; // 0000 0110 0100 1100 same font data just different grouping
    unsigned short sizeMask {0b0000'0000'0001'1111}; //0000 0000 0001 1111
    unsigned short sizeValue { static_cast<unsigned short>(sameFontData & sizeMask) }; // 0000 0000 0000 1100
    std::string sizeValueStr { std::bitset<16>(sizeValue).to_string()};
    printf("Size value = %d \n", sizeValue); // Size value = 12
    std::cout << sizeValueStr << std::endl; // 0000 0000 0000 1100
}



/***
A font data may be store as a 16bits(2 byte) binary integer like this: 0000 0110 0100 1100.
From the left: 
* the first 8 bits represents the font style. It has an decimal value of 6
* the 9th bit is unsed
* the 10th bit represents if the font is italic, a zero means not italic
* 11th bit represents if the font is bold, a one means it is bold
* The last 5 bits represents the point size of the font. It has a decimal value of 12
In summary the bits may be split as follows:
 0000 0110        0      1       0     0 1100
<--Style-->    unused  italic  bold   <--Size--> 
You can write the binary literal in code and use the bigit grouping charater(') to signal the borders of the informations in the bits

The 16 bits binary integer may be written in hexadecimal by converting each 4 bits to a hexa decimal digit:
0000 0110 0100 1100 = 064c

A mask is a binary number that is used to extract information from a bits. 
A mask is defined by 1s for all the bits you are interested to extract from the binary integer and 0s else where. 
When you bitwise-AND(&) the binary integer with the mask which you defined you get a 1 in all bits which is one on the binary bit position and 0 else where.

To extract the style information, we AND the font data with the following mask 11111111 00000000.
You see that this mask has 1s for all the bits representing the style and 0s else where.  
The result of will look like this: 
 0000 0110 0100 1100 & 1111 1111 0000 0000 = 0000 0110 0000 0000 
We then shift the resulting binary integer by 8 positions to the right to get the bits represeting the style alone: 
 0000 0110 0000 0000 >> 8 = 0000 0000 0000 0110
Converting this number to decimal gives you a value of 6.
Similarly, you can extract the size information but you don't have to shitft the bits since the style infomation is on the right-end of the  font data.

The bitwise AND operator can also be used to turn bits off. For example, to turn off the bit representing italic in the font, 
you AND the font with a mask having 0 bit at the italic position and 1s everywhere else.
***/