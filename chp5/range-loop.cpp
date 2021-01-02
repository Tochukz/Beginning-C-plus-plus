#include <iostream>

int main() {
	int scores[] {90, 87, 76, 69, 78};
	//int totalScore; // 2560000
	int totalScore {}; 
	printf("Initial Total %d \n", totalScore);
	// Range based for loop
	for (int score : scores) {
    	totalScore += score;
	} 
	printf("Total Score = %d \n", totalScore); // Total Score = 400


    int totalDistance {};
	for (auto distance : {90, 87, 76, 69, 78}) {
      totalDistance += distance;
	}
	printf("Total Ditance = %d \n", totalDistance); // Total Ditance = 400
}