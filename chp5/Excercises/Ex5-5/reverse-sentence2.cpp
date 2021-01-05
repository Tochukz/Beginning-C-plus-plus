#include <iostream>

int main() {
	printf("This program will reverse your sentence and compute the charater count.");

	int limit {1000};
	char sentence[limit] {};
	char reverseSentence[limit] {};

	std::cout << "\nType your sentence: ";
	std::cin.getline(sentence, limit);

    size_t charCount {};
    size_t size {};
	char ch {};
	int count {};
	while(sentence[count] != '\0') {
		ch = sentence[count++];
		if (ch != ' ') {
			charCount++;
		}	
		size++;
	}

    for(int i {1}; sentence[size-i] != '\0'; i++) {
    	reverseSentence[i-1] = sentence[size-i];
    }
    
    printf("Total Character = %d\n", charCount);
    printf("Reverse Sentence: \n %s \n", reverseSentence);
    
}