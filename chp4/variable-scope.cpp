#include <iostream>

int main() {
    int test { 95 };

    switch(test) {
        case 30:
          int score { 30 }; // This is illigal and will cause a compile error because int score can be overriden by the 'case 50' block or the default block
          break;
        case 50: {
           int mark { 50 }; // This is fine because int mark is defined with the scope of its case block and cannot be overriden. 
           break;
        }
        default: {
            int result {}; // This is fine only because default is the last case and there is no other case available to override int result
            break; 
        }
        
    }
}

/**
 This code fails to compile with the following errors:  
   *  error: jump to case label [-fpermissive] case 50: {
   *  int score { 30 }; 
   *   error: jump to case label [-fpermissive] default: {
   *  int score { 30 };

For a variable defined in a switch statement to be legal, it must be reachable and it must not be possible during execution to enter the scope of the variable while bypassing its definition.  

When you enter case 50, you can override or bypass the int score defined in case 30. 
This is because variables defined in case 30 are not defined inside its own block scope so it fall into the block scope of the switch statement and can therefore be overriden by any of the sebsequent cases.    
**/