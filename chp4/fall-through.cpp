#include <iostream>

int main() {
    int score {};

    std::cout << "What is your score: ";
    std::cin >> score;

    std::string message = "";
    switch(score) {
        case 40: 
          message="Not Good!";
        case 50: 
        case 55:
          message = "Okay!";
          break;
        case 80:
          message = "Very ";
          // [[fallthrough]] // Fall-through still happens without this statement. It is optional
        case 70:
          message += "Very ";
          [[fallthrough]]
        case 60:
          message += "Good!";
          break;
        case  90: 
          message = "Excellent!";
          break;
        default: 
          message = "Let met see!";        
    }

    std::cout << message << std::endl;
}

/**
 The [[fallthrough]] statement is an optional statement used to signal to other developers and to the compiler 
 that a given fall-through in swtich statemetn case was intentional by the author and was not a mistake.  
**/