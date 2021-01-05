#include <iostream>

int main() {
	printf("This program will reverse your sentence and compute the charater count.");

	int limit {1000};
	char sentence[limit] {};

	std::cout << "\nType your sentence: ";
	std::cin.getline(sentence, limit);

    size_t charCount {};
    size_t size {};
	for(char ch : sentence) {
      if (ch == '\0') {
      	break;
      }
      if (ch != ' ') {
      	 charCount++;
      }
      size++;
	}

    printf("Total Character = %d\n", charCount);
    printf("Reverse Sentence: \n");
    for(int i {1}; sentence[size-i] != '\0'; i++) {
    	std::cout << sentence[size-i];
    }
    std::cout << std::endl;
    
}