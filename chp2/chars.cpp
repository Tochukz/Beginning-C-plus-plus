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

    signed char temp { -6 };
    unsigned char score { 95 };

    /* wide char type */
    wchar_t z { L'Z'};
    wchar_t nReverse { L'\x0438'};

    /* other char types */
    char16_t b { 'B'};
    char32_t cy {u'\x0438'};


    printf("First: %c \n", first); // First:
    printf("%c=Male, %c=Female \n", male, female); // M=Male, F=Female
    printf("My Net Worth, %dMillion \n", millions); // My Net Worth, 22Million

    printf("a = %c \n", a); // a = A
    printf("f = %c \n", f); // f = R

    printf("Temperature at artatica could be is %d centigrate \n", temp); // Temperature at artatica could be is -6 centigrate
    printf("My AWS Score is %d percent \n", score); // Temperature at artatica could be is -6 centigrate

    /* There prints need to use Formatting Stream Output. Learn more about that */
    std::wcout << "z = " << z << std::endl; // z = Z

    std::wcout << "n Reversed = " << nReverse << std::endl; // n Reversed = b = B, cy = 8
    printf("\n New Line");
    std::cout << "b = " << b << std::endl;  //
    std::cout << "cy = " << cy << std::endl; // cy = 1080

    printf("%X", cy);//

    //Todo: Return back to print the last two lines and see
}
