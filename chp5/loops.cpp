#include <iostream>

int main() {
    double scores[7] { 78.5, 60.6, 78.5, 63.9, 59.3, 63.2, 47.4};
    double scoresPlus5[7] = {};

    for(size_t i {}; i < 7; i++) {
      scoresPlus5[i] = scores[i] + 5;
      printf("Score %d = %.2f \n", i, scores[i]);
    }
    printf("Fifth score = %f \n", scoresPlus5[4]); // Fifth score =  64.300000

    
    // Omitting the initialization statement in a for loop
    size_t j {};
    for( ; j < 10; j++) {
      printf("j = %d \n", j);
    }
    printf("j = %d \n", j); // j = 10
}