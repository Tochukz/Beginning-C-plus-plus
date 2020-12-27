#include <iostream>

int main ()
{
  int score {95};

  auto mark {89};       // mark type is int by inference
  auto width {50UL};     // width is of type unsigned long
  auto length  = 200UL; // length is of type unsigned long
  auto pi (3.14159);    // pi has type double

  std::cout << "Size of int {95} is " << sizeof score << "bytes " << std::endl;             // Size of int {95} is 4bytes
  std::cout << "Size of long long tpye is " << sizeof (long long) << "bytes " << std::endl; // Size of long long tpye is 8bytes
  std::cout << "Size of 95 * 100  is " << sizeof (score * 100) << "bytes " << std::endl;    // Size of 95 * 100  is 4bytes

  printf("Size of 'width' is  %d bytes  \n", sizeof width); // Size of 'width' is  4 bytes
  printf("Size of 'length' is %d bytes \n", sizeof length); // Size of 'length' is 4 bytes
  printf("Size of pi is %d bytes \n", sizeof pi);           // Size of pi is 8 bytes
}

/* The compiler will deduce the type whenever an auto keyword is used to initialize a variable
*  This auto keyword is synonymous to the var keyword in C#
*
*
* You need to be careful when using braced initializers with the auto keyword.
* Note that the type deduction rules have changed from C++14 to C++17.
* For example, in C++14, auto i {10}; has type std::initializer_list<int>
*/
