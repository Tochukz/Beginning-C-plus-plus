#include <iostream>
#include <bitset>

int main () {
  unsigned short fontData {0b00000110'0'1'001100}; // 0000 0110 0100 1100 represents style of 6, italic, not bold and 12 point size 
  unsigned short italicMask {0b000000000'1'000000}; // 0000 0000 0100 0000
  unsigned short boldMask {0b0000000000'1'00000};   // 0000 0000 0010 0000
  
  // Another way to defined the above binary literals
  unsigned short italicMask2 {1u << 6}; // 0000 0000 0100 0000
  unsigned short boldMask2 {1u << 5};   // 0000 0000 0010 0000
  // To prepare a mask that will turn on the n-th bit you shift 1u to the left by n-1 steps

  // Using the bitwise OR operator to turn on the bit representing bold in the font data
  unsigned short boldTurnedOn { static_cast<unsigned short>(fontData | boldMask )};   // 0000 0110 0110 1100
  unsigned short boldTurnedOn2 { static_cast<unsigned short>(fontData | boldMask2 )}; // 0000 0110 0110 1100

  // Using mutiple bitwise OR operator to run on both the italic and the bold bits
  unsigned short boldAndItalicOn { static_cast<unsigned short>(fontData | boldMask | italicMask)}; // 0000 0110 0110 1100
  // In this case our italic bit is already on and will stay on.

  std::string boldTurnedOnStr { std::bitset<16>(boldTurnedOn).to_string()};
  std::string boldTurnedOn2Str { std::bitset<16>(boldTurnedOn2).to_string()};
  std::string boldAndItalicOnStr { std::bitset<16>(boldAndItalicOn).to_string()};
  
  std::cout << boldTurnedOnStr << std::endl;    // 0000 0110 0110 1100
  std::cout << boldTurnedOn2Str << std::endl;   // 0000 0110 0110 1100
  std::cout << boldAndItalicOnStr << std::endl; // 0000 0110 0110 1100
}

/***
The bitwise OR operator can be used to turn on a bit, that is to make it a 1.
Consider the font data represented by the binary 0000 0110 0100 1100.
The bits represents the style, italic, bold and size of the font as follows:
 0000 0110        0      1       0     0 1100
<--Style-->    unused  italic  bold   <--Size--> 

You can turn on the bit representing bold by using a mask that has the bold bit to be 1 and all others zero this is 0000 0000 0010 0000.
0000 0110 0100 1100 | 0000 0000 0010 0000 = 0000 0110 0110 1100

***/
