#include <iostream>
#include <array> 

int main() {
  const char* pstars[] {
    "Fatty Arbuckle",
    "Clara Bow",
    "Boris Karloff",
    "Mae West",
    "Oliver Hardy", 
    "Greta Garbo"
  };

  std::cout << "Pick a lucky start ! Enter a number between 1 and "
            << std::size(pstars) << ": ";
  size_t choice {};
  std::cin >> choice;

  if (choice >= 1 && choice <= std::size(pstars))  {
    std::cout << "Your lucky star is " << pstars[choice - 1] << std::endl;
  } else {
    std::cout << "Sorry, you haven't got a lucky star. " << std::endl;
  }

}

/**
With a regular char array, each row must have at least the length of the longest string which will result in quite some wasted bytes 
By allocating all strings separately in the free store, as shown in this example, this is not longer the issue. 
Although you may need some extra memory to store the addreeses of the strings.  

This approach works nicely as long as you know the exact number of strings at compile time and provided all of them are defined by literals.  
*/