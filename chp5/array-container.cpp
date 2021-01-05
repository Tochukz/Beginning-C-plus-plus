#include <iostream>
#include <array>
#include <vector>

int main() {
	std::array<double, 10> scores; // Contains gabage values as it is uninitialized;
	std::array<double, 10> marks {}; // Initialized to zeros.
    std::array<double, 10> results {};
    results.fill(95);

    printf("Scores size =%d\n",  std::size(scores));
    scores = {}; // All values now zero
    scores[0] = 75, scores[1] = 82, scores[2] = 69, scores[9] = 95; 
    double totalScore {};
    for(auto score: scores) {
    	totalScore += score;
    }
    printf("Total Score = %f \n", totalScore); // Total Score = 321.000000

	for(int i {}; i < results.size(); i++) {
		// printf("%f \n", results[i]);
		printf("%f \n", results.at(1)); // The at() method has added security, in that the value of i will be checked 
	}

	double lastScore = scores[12]; // accesses the element beyond the end of the array and gets whatever it contains.
	//double lastMark = marks.at(10); // will throwing an instance of 'std::out_of_range' exception.

	printf("First Score = %f, also First Score = %f \n", scores[0], scores.front());                 // First Score = 75.000000, also First Score = 75.000000
	printf("Last Score = %f, also Last Score = %f \n", scores[scores.size() - 1], scores.back());    // Last Score = 95.000000, also Last Score = 95.000000

    /* You can compare entire array<> containers as long as they are of the same size and type */
    std::array<int, 5> first {1, 2, 3, 4, 5};
    std::array<int, 5> second {1, 2, 3, 4, 5};
    std::array<int, 5> third {1, 2, 2, 4, 5};

    /* For gt or lt comparison, the first pair of elemts that differs produces the result */
    if (first == second) {
    	printf("First = Second \n");
    }
    if (first != third) {
    	printf("First <> Third \n");
    }
    if (third > first) {
    	printf("Third > First \n");
    }
    if (third < first) {
    	printf("Third < First \n");
    }
    // First = Second
    // First <> Third
    // Third < First

     printf("Comparing Plain Arrays \n");
    /* Comparing plain arrays */
    int firstN[] {1, 2, 3, 4, 5};
    int secondN[] {1, 2, 3, 4, 5};
    int thirdN[] {1, 2, 2, 4, 5};
     if (firstN == secondN) {
    	printf("FirstN = SecondN \n");
    }
    if (firstN != thirdN) {
    	printf("FirstN <> ThirdN \n");
    }
    if (thirdN > firstN) {
    	printf("ThirdN > FirstN \n");
    }
    if (thirdN < firstN) {
    	printf("ThirdN < FirstN \n");
    }
    // FirstN <> ThirdN
    // ThirdN < FirstN]

    /* Assign one array container to another */
    std::array<int, 3> even {2, 6, 9};
    std::array<int, 3>  numbers {};
    numbers = even;
    if (numbers == even) {
      printf("Numbers = even");
    }
    // Numbers = even

    /* Array containers can be stores inside other containers */
    std::vector<std::array<int, 3>> triplets; 

    /* Accessing the underlying plain array of an array<> container*/
    // Not working
    // std::array<int, 3> containerScores { 89, 95, 87};
    // int plainScores[3] { containerScores.data() };
    // for(auto score: plainScores) {
    // 	printf("%d ", score);
    // }
}

/**
Applying comparison operators to plain arrays is not all that useful because it clearly does
not result in thrie elements being compared.

If you call a legancy function that expects plain arrays as input, you can always access the
build-in array that is encapsulated within the array<> object using its data() member
**/