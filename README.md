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
