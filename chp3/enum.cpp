#include <iostream>

int main() {
  /* Defining enums */
  enum class Day { Monday, Tuesday, Webnesday, Thursday, Friday, Saturday, Sunday};
  enum class Position { First = 1, Second, Third, Fourth, Fifth};
  enum class DevTool { Mouse = 3, Laptop, REMOTE_VM, Internet = 1, Cloud_Account};
  //enum class Month { Jan  = 1, January  = 1, February, March, April, May};
  enum class Month {Jan = 1, Feb, Mar, Apr, January = Jan, Febuary = Feb, March = Mar, April = Apr  };

  /* Enum type with char type enumerators. You can specify anyintegral data tyoe for the enumerators */
  enum class Punctuation: char {Comma = ',', Exclamation = '!', Question = '?'};
  // The chars used in the enumerators will corresponde to the code value of the symbols which are 44, 33, and 63 in this cases.
  
  /* Initializing variable of enum types */
  Day today { Day::Webnesday };
  Position previousPosition { Position::Second };
  DevTool leastTool { DevTool::REMOTE_VM };
  Punctuation questionMark { Punctuation::Question };

  /* You must cast an enum variable to int because the standard output stream will not recorgnize the enumerator's type*/
  std::cout << "Today is " << static_cast<int>(today) << std::endl;                      // Today is 2
  std::cout << "My position was " << static_cast<int> (previousPosition) << std::endl;   // My position was 2
  std::cout << "The least tool needed is " << static_cast<int> (leastTool) << std::endl; // The least tool needed is 5
  std::cout << "Month January = " << static_cast<int> (Month::January) <<std::endl;      // Month January = 1
  std::cout << "char code for ? is " << static_cast<int>(questionMark) << std::endl;     // char code for ? is 63
  
  std::cout << "symbol for char 63 = " << char(63) << std::endl;                                          // symbol for char 63 = ?
  std::cout << "symbol for binary 00111111 = " <<  char(0b00111111) << std::endl;                         // symbol for binary 00111111 = ?
  std::cout << "Punctuation::Exclamation = " << static_cast<char>(Punctuation::Exclamation) << std::endl; // Punctuation::Exclamation = !


}

/**
 Values for enumerators in an enumerator type definition must be complile-time contants, that is, constant expressions that the compiler can evaluate.
 The old syntax to define en enum does not have the class keyword: 
   enum  Day { Monday, Tuesday, Webnesday, Thursday, Friday, Saturday, Sunday};
 Old-style enums convert to values of integral or even floating-point types without a cast, which can easily lead tomistakes. 
 The more strongly typed enum classes are always the better choice over old-style enum types.
**/