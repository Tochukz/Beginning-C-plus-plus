#include <iostream>  

int main() {
	char vowels[] { 'a', 'e', 'i', 'o', 'u'};
    char notes[10] {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

	/* C-Style string */
	char name[10] {"Joy West"};
	// The char '\0' called null charater, will be appended to this string ofcharaters
	// The '\0' represents the termination of the charater array
	char city[] {"Cape Town"}; // A char '\0' representing the end of the string will automatically be apended 
	char city2[] {'C', 'a', 'p', 'e',  ' ', 'T', 'o', 'w', 'n'};  
    char city3[] {'C', 'a', 'p', 'e',  ' ', 'T', 'o', 'w', 'n', '\0'}; // I use '\0' to mark the end of the char array for printing sake.

    printf("Vowels First = %c, Last = %c\n", vowels[0], vowels[4]); // Vowels First = a, Last = u
    printf("Notes First = %c, Last = %s \n", notes[0], notes[9]);   // Notes First = A, Last = (null)
    printf("Name First = %c, Last = %c \n", name[0], name[9]);      // Name First = J, Last =

    printf("Length of name = %d \n", std::size(name));   // Length of name = 10
    printf("Length of city = %d \n", std::size(city));   // Length of city = 10
    printf("Length of city2 = %d \n", std::size(city2)); // Length of city2 = 9

    printf("My city is %s. \n", city); // My city is Cape Town.
    printf("My city is %s. \n", city2); // My city is Cape TownCape Town.
    printf("My city is %s. \n", city3); // My city is Cape Town.
}

/**
Caution: You can’t output the contents of an array of a numeric type by just using the array name. This
works only for char arrays. And even a char array passed to an output stream must be terminated with a null
character, or the program will likely crash.
**/