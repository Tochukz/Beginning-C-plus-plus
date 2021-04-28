#include <iostream>

int main() {
    enum class Color : unsigned int { Red = 0xff0000, Green = 0x008000, Yellow=0xffff, Purple=0x800080, Blue, Black=0x000000, White=0xffffff };
    
    Color yellow { Color::Yellow };
    Color purple { Color::Purple }; 
    Color green { Color::Green };

    unsigned int redMask { 0xff0000 };
    unsigned int RinYellow { static_cast<unsigned>(yellow) & redMask }; 


}