#include <iostream>

int main()
{
    char first; 
    char male {'M'}, female {'F'};
    char millions { 22 };

    char a { 'A'};
    char f { static_cast<char> (a + 5)}; // F;
    ++f; // G
    f += 11; // R

    /* wide char type */
    wchar_t z { L'Z'};
    wchar_t nReverse { L'\x0438'};

    /* other char types */
    char16_t b {u'B'};
    char32_t cy {u'\x0438'};


    printf("First: %c \n", first);
    printf("%c=Male, %c=Female \n", male, female);
    printf("My Net Worth, %dMillion \n", millions);

    printf("a = %c \n", a);
    printf("f = %c \n", f);

    std::wcout << "z = " << z << std::endl;
    std::wcout << "n Reversed = " << nReverse << std::endl;
    printf("b = %c, cy = %c \n", b, cy);
}