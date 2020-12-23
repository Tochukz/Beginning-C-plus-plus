#include <iostream>

int main() {
  enum Day { Monday, Tuesday, Webnesday, Thursday, Friday, Saturday, Sunday};
  enum Position { First = 1, Second, Third, Fourth, Fifth};
  enum DevTool { Mouse = 3, Laptop, REMOTE_VM, Internet = 1, Cloud_Account};
  //enum Month { Jan  = 1, January  = 1, February, March, April, May};
  enum Month {Jan = 1, Feb, Mar, Apr, January = Jan, Febuary = Feb, March = Mar, April = Apr  };

  Day today { Day::Webnesday };
  Position previousPosition {Position::Second};
  DevTool leastTool { DevTool::REMOTE_VM};

  std::cout << "Today is " << static_cast<int> (today) << std::endl; // Today is 2
  std::cout << "My position was " << static_cast<int> (previousPosition) << std::endl; // My position was 2
  std::cout << "The least tool needed is " << static_cast<int> (leastTool) << std::endl; // The least tool needed is 5
  std::cout << "Month January = " << static_cast<int> (Month::January) <<std::endl; // Month January = 1
}