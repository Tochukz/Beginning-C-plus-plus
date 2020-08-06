# Beginning C++17  (2018)
__By Ivor Horto and Peter Van Weert__  

## Chapter 1
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
> helloApp
```
