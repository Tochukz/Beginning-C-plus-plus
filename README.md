# Beginning C++17, 5th Edition (2018)
__By Ivor Horto and Peter Van Weert__  
[Example Code](https://github.com/apress/beg-cplusplus17)

## Getting Started
First you need to install the MinGW GCC/G++ compiler which is used to compile C and C++ programs.  
Go to the download page of MinGW at [http://www.mingw.org](http://www.mingw.org) to download the installer.  
See Youtube [video](https://www.youtube.com/watch?v=sXW2VLrQ3Bs) on how to install it.  
After installation and adding the compiler binary to your path you can verify the installation from your terminal.  
```
> g++ --version
```  
Another option is to go to [geeksforgeeks.org](https://www.geeksforgeeks.org/complete-guide-to-install-c17-in-windows/) and use the guide to install a distro curated by a third party. This will give you the latest version. The compiler from the source uses a different command compared to the one from [mingw.org](mingw.org).

Alternatively, if you already have the Visual C++ workload of visual studio installed you can add the `cl.exe` executable to your path. Something like `C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\VC\Tools\MSVC\14.27.29110\bin\Hostx86\x64`.  
After that you should have the `cl` command available on your command prompt.

__To run a  C++ Helloworld Application__  
First, compile the `.cpp` file to generate a `.exe` file:   
```
> c++ -o helloApp helloword.cpp
```
Now, run the generated `.exe` file.   
In our case this will be `helloApp.exe` since we used `helloApp` as the name of our output file in the command above.  
```
> helloApp.exe
```

## Introduction
The latest International Organization for Standardization (ISO) standard for C++ is commonly referred to as C++17.  

## Chapter 1: Basic Ideas
Programming using the features of C++11 and beyond is referred to as _modern C++_.

__C++ Program Concept__  
The file extension `.cpp` indicated a C++ source file. Source files contains functions and all the executable code. Other source file extensions includes: `.cc`, `.cxx`, and `.c++`.    
Header files contains _function prototypes_ and _definitions_ for classes and templates that are used by the executable code in the source files. They have the file extension `.h` or `.hpp`.  
For very small programs a single file may be used.  

__Names And Keywords__  
Tip: Do not use names that start with underscore for a variable name.

__Creating an Executable__  
Creating an executable from your C++ source code is a three-step process:
1. The content of all _#include_ header is copied into your `.cpp` files  
2. The _compiler_ processes each `.cpp` files to produce a corresponding _object file_ that contains the machine code equivalent of the source code.  
3. The _linker_ combines the object files along with any library functions that are necessary into an executable file.


__Representing Numbers__  
A binary digit is commonly known as a _bit_.  
A hexadecimal digit corresponds to four binary digits.  e.g F = 1111, 9 = 1001 etc.  
A _byte_ is 8 _bits_ which is exactly 2 hexadecimal digits.  
Any binary integer in memory always corresponds to an exact number of hexadecimal digits.  

Caution: Never write decimal integers in your source code with a leading zero. A number with a leading zero represents an _Octal_ number.  

__Templates__  
A _template_ is a class that the compiler can use to generate one or more of a family of similar classes. You can also have a _function template_ to generate functions.  

__Bi-Endian and Little-Endian System__  
When you process binary data that comes from another machine, you need to know the endianness of that machine. Binary data is written to a file or transmitted over a network as sequence of bytes.  It's up to you how to interpret it. If the source of the data is a machine with a different endianness from the machine on which your code is running, you must reverse the order of the bytes in each binary value. If you don't you have garbage.  

## Chapter 2:  Introducing Fundamental Types of Data
__Variables, Data and Data Types__  
A variable is a named piece of memory that you define.  

__Integer Literal__  
You can use the single quote character as a separator for any integer literal. For example:  
```
long long distance {15'000'000};
unsigned long number1 {0xFF00'00FF'0001UL};
int number2 {0b1100'1010'1101};
```  

__Working with char variables__  
Types _`char`_, _`signed char`_ and _`unsigned char`_ ate different types.  
While _char_ can store a single character and occupies one byte, _signed char_ and _unsigned char_ is used to store integers.  

_`wchar_t`_ stores a wide character and occupies either two or four bytes depending on your compiler. Types _`char16_t`_ and _`char32_t`_ may be better for handling Unicode character in a cross-platform manner.

__The auto keyword__   
If your compiler properly supports C++17, you can use braced initialization to initialize any variable with a single value, provided you do not combine it with an assignment. If your compiler is not fully up-to-date yet, however, you should simply never use braced initializer with _auto_. Instead, either explicitly state the type or use assignment of functional notation.


## Chapter 3: Working with Fundamental Data Types  
__The Lifetime of a Variable__  

| Variable | Duration                   | Lifetime                                    |
|----------|----------------------------|---------------------------------------------|
| local    | automatic storage duration | They are destroyed at the end of the block  |
| static   | static storage duration    | Are destroyed when the program ends         |
| dynamic  | dynamic storage duration   | Are destroyed when you release their memory |
| thread   | thread storage duration    | Learn more later (Advanced topic)           |  

Local variables are also called automatic variables.  

## Chapter 4: Making Decisions  
Superfluous semicolons, and therefore empty statements, are allowed to appear pretty much anywhere within a series of statements.  
```
int i = 0;; i += 5;; ; std::cout << i << std::endl ;;
```

__Character Classification and Conversion__  
A _locale_ is a set of parameters that defines the user's language and regional preferences, including the national or cultural character set and the formatting rules for currency dates. The _cctype_ header provides character classification functions.

__Statement Blocks and Variable Scope__  
For a variable defined in a switch statement to be legal, it must be reachable and it must not be possible during execution to enter the scope of the variable while bypassing its definition.

## Chapter 5: Arrays and Loops  
__Caution__: Array index values are not checked to verify that they are valid. It’s up to you to make sure that
you don’t reference elements outside the bounds of the array. If you store data using an index value that’s
outside the valid range for an array, you’ll either inadvertently overwrite something in memory or cause a socalled segmentation fault or access violation (both terms are synonymous and denote an error that is raised by the operating system if and when it detects unauthorized memory access). Either way, your program will almost certainly come to a sticky end.

__Controlling a for Loop with Floating-Point Values__   
You need to be careful when using a floating-point variable to control a for loop. Fractional values may
not be representable exactly as a binary floating-point number. This can lead to some unwanted side effects.

__Note__: Any number that is a fraction with an odd denominator cannot be represented exactly as a binary
floating-point value.

__Caution__: Comparing floating-point numbers can be tricky. You should always be cautious when comparing
the result of floating-point computations directly using operators such as `==`, `<=`, or `>=`. Rounding errors almost
always prevent the floating-point value from ever becoming exactly equal to the mathematical precise value.

__Note__: There will be no warning if a number value cannot be accommodated in the memory allocated; the
result will just be incorrect.  

__Controlling a for Loop with Unsigned Integers__   
__Caution__: Take care when subtracting from unsigned integers. Any value that mathematically speaking should be negative then wraps around to become a huge positive number. These types of errors can have a catastrophic results in loop control expressions.  

__Array of Characters__  
A character array that is terminated by `'\0'` is referred to as a _C-style string_.  

__Allocating an Array at Runtime__   
The _C++17_ standard does not permit an array dimension to be specified at runtime. That s, the array dimension must be a constant expression that can be evaluated by the compiler.   
However, some current _C++ compilers_ do allow setting variable array dimensions at runtime because the current _C standard_, _C11_, permits this, and a _C++ compiler_ will typically compile C code too.   
__Note__: If your compiler does not allow variable-length arrays, you can achieve the same result - and much more using a _vector_.   

## Chapter 6: Pointer and References  
