#include <iostream>
#include <vector>

int main() {
	int totalChars {};
	char ch {};
	printf("This program will compute number of charaters you enter. It terminates when your enter the # charater: \n");
    
    do {
      std::cin >> ch;
      //printf("New charater: %c \n", ch);
      totalChars++;
      
    } while(ch != '#');
    
    // remove the last # char count;
    --totalChars;

    printf("Total charaters = %d \n", totalChars);
}