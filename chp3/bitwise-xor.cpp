#include <iostream>
#include <bitset>

int main() {
  unsigned short fontData { 0b0000'0110'0100'1100 };
  unsigned short boldMask { 0b0000'0000'0010'0000};
  
  unsigned boldOn { static_cast<unsigned short>(fontData ^ boldMask)};
  unsigned boldOff { static_cast<unsigned short>(boldOn ^ boldMask)};
  unsigned boldOnAgain { static_cast<unsigned short>(boldOff ^ boldMask)};

  std::cout << std::bitset<16>(boldOn).to_string() << std::endl;      // 0000 0110 0110 1100
  std::cout << std::bitset<16>(boldOff).to_string() << std::endl;     // 0000 0110 0100 1100
  std::cout << std::bitset<16>(boldOnAgain).to_string() << std::endl; // 0000 0110 0110 1100

}

/**
The bitwise XOR operator can be used to toggle a bit in  binary number.
Consider the data representing a font 0000 0110 0100 1100
The bits represents the style, italic, bold and size of the font as follows:
 0000 0110        0      1       0     0 1100
<--Style-->    unused  italic  bold   <--Size--> 

We can toggle the bit represeting the bold on and off again by using an appropriate mask which is 0000 0000 0010 0000 as follows
0000 0110 0100 1100 ^ 0000 0000 0010 0000 = 0000 0110 0110 1100 (bold now on)
0000 0110 0110 1100 ^ 0000 0000 0010 0000 = 0000 0110 0100 1100 (bold now off)
0000 0110 0100 1100 ^ 0000 0000 0010 0000 =  0000 0110 0110 1100 (bold now on again)
**/