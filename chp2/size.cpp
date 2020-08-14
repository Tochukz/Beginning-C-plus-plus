#include <iostream>

int main ()
{
  int score {95};
  std::cout << "Size of int {95} is " << sizeof score << "bytes " << std::endl;
  std::cout << "Size of long long tpye is " << sizeof (long long) << "bytes " << std::endl;
  std::cout << "Size of 95 * 100  is " << sizeof (score * 100) << "bytes " << std::endl;
}