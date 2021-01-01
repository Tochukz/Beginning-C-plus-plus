#include <iostream>

int main() {
    // limiting the scope of a variable using a code block
    {
        int score { 60 };
        if (score > 50) {
            std::cout << "You passed = " << score << std::endl;
        }
    }
    // score varaible is not available here

    // limiting the scope of a variable using initializaton statement
    if (auto mark {60}; mark > 50) {
      std::cout << "You passed = " << mark << std::endl;
    }
    // mark variable is not available here
}

/**
The init-statement in the if() only works in c++17
If init-statement is not supported you will get a compile error like this: warning: init-statement in selection statements only available with -std=c++17 or -std=gnu++17  if (auto mark {60}; mark > 60) {

For completeness, C++17 adds a similar syntax for switch statements:
switch (initialization; condition) { ... }
**/
