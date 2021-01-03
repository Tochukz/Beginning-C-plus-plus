#include <iostream>
#include <cctype>

int main()  {
	const int max_size {100};
	char sentence[max_size] {};
         
	printf("Enter a sentence to get the number of vowels there in: \n");

    // The getline() function make it possible to read a string with spaces
    std::cin.getline(sentence, max_size);
    printf("You entered: \n %s \n", sentence);

    int vowels {};
    int consonants {};
    for(char i {}; sentence[i]; i++) {   
    //for(char i {}; sentence[i] != '\0'; i++) {    
    	if (!std::isalpha(sentence[i])) {
          continue;
    	}
        switch(std::tolower(sentence[i])) {
        	case 'a':
        	case 'e':
        	case 'i':
        	case 'o': 
        	case 'u': 
        	  ++vowels;
        	  break;
        	default: 
        	  ++consonants;        
        }
    }

    printf("You have %d vowels and %d consonants!", vowels, consonants);

}

/**
The std::cin.getline() function can take a third parameter which determin the charater that teminates a given line. 
By default the newline charater \n, which you get by pressing the enter  key terminates the line.  
You can change it to * for example 
  std::cin.getline(sentence, max_size, "*");
**/