#include <iostream>
#include <bitset>

int main() {
  unsigned short fontData {0b0000'0110'0100'1100};
  
  // To turn off the 7th bit which represents the italic 
  unsigned short italicOffMask {0b1111'1111'1011'1111};                                   // 1111 1111 1011 1111
  unsigned short italicTurnedOff {static_cast<unsigned short>(fontData & italicOffMask)}; // 0000 0110 0000 1100
  std::string italicTurnedOffStr { std::bitset<16>(italicTurnedOff).to_string()}; 
  std::cout << italicTurnedOffStr << std::endl; // 0000 0110 0000 1100

  // Using bitwise complement operator to obtain italic mask
  unsigned short italicOnMask {static_cast<unsigned short>(1u << 6)};                  // 0000 0000 0100 0000 (because the italic is at the 7th bit from the left)
  unsigned short italicOffMask2 {static_cast<unsigned short>(~italicOnMask)};          // 1111 1111 1011 1111 
  unsigned italicTurnedOff2 { static_cast<unsigned short>(fontData & italicOffMask2)}; // 0000 0110 0000 1100
  std::string italicTurnedOff2Str { std::bitset<16>(italicTurnedOff2).to_string()};
  std::cout << italicTurnedOff2Str << std::endl;                                       // 0000 0110 0000 1100

  // using composite operator &= 
  unsigned short fontNotBold {0b0000'0110'0110'1100};                 // 0000 0110 0110 1100 bold is 1 in this data
  fontNotBold &= ~italicOnMask;                                       // 0000 0110 0010 1100 turned off bold
  std::cout << std::bitset<16>(fontNotBold).to_string() << std::endl; // 0000 0110 0010 1100
 
  // turn off italic and bold 
  unsigned short fontNotBoldNotItalic {0b0000'0110'0110'1100};                 // 0000 0110 0110 1100 bold and italic are 1s.
  unsigned short boldOnMask { static_cast<unsigned short>(1u << 5)} ;          // 0000 0000 0010 0000 (because bold is the 6th bit from the left)
  fontNotBoldNotItalic &= ~italicOnMask & ~boldOnMask;                         // 0000 0110 0000 1100
  std::cout << std::bitset<16>(fontNotBoldNotItalic).to_string() << std::endl; // 0000 0110 0000 1100

  // Another way to turn of  italic and bold
  unsigned short fontNotBoldNotItalic2 {0b0000'0110'0110'1100};                 // 0000 0110 0110 1100 bold and italic are 1s
  fontNotBoldNotItalic2 &= ~(italicOnMask | boldOnMask);                        // 0000 0110 0000 1100
  std::cout << std::bitset<16>(fontNotBoldNotItalic2).to_string() << std::endl; // 0000 0110 0000 1100
}

/***
The bitwise complement operaturn simple flips 0s to 1s and 1s to 0s. It is also know as bitwise NOT operator.  
You can use the bitwise complement operator (~) to obtain an appropriate mask to be used to turn off bits of a binary integer.  
Consider the data representing a font 0000 0110 0100 1100
The bits represents the style, italic, bold and size of the font as follows:
 0000 0110        0      1       0     0 1100
<--Style-->    unused  italic  bold   <--Size--> 
To turn off the italic bit we need a mask where all the bits are 1s and the italic bit is 0 that is 1111 1111 1011 1111.
Now we AND this font bit and the mask:
0000 0110 0100 1100 &  1111 1111 1011 1111 = 0000 0110 0000 1100

The bitwise complement operator can be used to easily determine the mask used above using a mask that is meant to turn italic on instead:
mask to turn italic on is 0000 0000 0100 0000
mask to turn italic off is ~0000 0000 0100 0000 which same as 1111 1011 1111 1111

The advantage of using the bitwise complement operator in this way is that you can determine the mask need to turn the bit off even if
you do not know the how many bits there are in the binary integer as long as you know the position of the bit to turn off.  

***/