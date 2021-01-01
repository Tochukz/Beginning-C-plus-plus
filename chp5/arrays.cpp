#include <iostream>
#include <array>

int main() {
    unsigned int scores[5]{ 100, 120, 70, 95 };
    scores[1] = 50;

    // Determine the array length
    const int scoresSize{ std::size(scores) };
    // Old way of determine the array length
    const int scoresLength { sizeof(scores) / sizeof(scores[0]) };

    printf("Score 1 = %d \n", scores[0]); // 100
    printf("Score 2 = %d \n", scores[1]); // 50
    printf("Last Score = %d \n", scores[scoresSize - 1]); // 0

    int weights[]{ 110, 50, 75, 80 }; // implicicit size array
    printf("Weight 2 = %d \n", weights[3]);  //
    printf("Last Weight = %d \n", weights[std::size(weights) - 1]); //

    printf("There are %d elements in the scores array\n", scoresSize);   // There are 5 elements in the scores array
    printf("There are %d elements in the scores array\n", scoresLength); // There are 5 elements in the scores array

}

/**
Caution Array index values are not checked to verify that they are valid. It’s up to you to make sure that
you don’t reference elements outside the bounds of the array. If you store data using an index value that’s
outside the valid range for an array, you’ll either inadvertently overwrite something in memory or cause a socalled
segmentation fault or access violation (both terms are synonymous and denote an error that is raised by
the operating system if and when it detects unauthorized memory access). Either way, your program will almost
certainly come to a sticky end.
**/