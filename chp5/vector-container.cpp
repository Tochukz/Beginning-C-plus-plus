#include <iostream>
#include <vector>

int main() {
	std::vector<double> temperatures;
    temperatures.push_back(36.5);

    /* Initialize a vector with a predefined number of elements */
    std::vector<double> weights(10); // weights vector contains 10 elements of type int initialized with zeros
    std::vector<long> masses(20, 100L); // The 20 elments of masses with be initialized with value of 100L
    std::vector<double> values {95.6}; // Contains a single element
    std::vector<unsigned int> primes {2, 3, 5, 7, 11};

    weights[0] = 100.05;
    weights[4] = 79.1l;
    weights[9] = 68.42;
    printf("First weight = %f also First weight = %f \n ", weights[0], weights.front());              // First weight = 100.050000 also First weight = 100.050000
    printf("Last weight = %f also Last weight = %f \n ", weights[weights.size() -1], weights.back()); // Last weight = 68.420000 also Last weight = 68.420000
    for (int x {}; x < weights.size(); x++) {
    	//printf("%f ", weights[x]);
         printf("%f ", weights.at(x));
    }
    /* Reinitialize the a vector container*/
    weights.assign(10, 30.07);
    printf("\nNew weight = %f \n", weights.at(9)); // New weight = 30.070000

    /* Remove all the elements in a vector */
    weights.clear();
    printf("New size of weight = %d\n", weights.size()); // New size of weight = 0

    /* Check if a container is empty */
    if (weights.empty()) {
    	printf("weights is empty \n");
    }
    // weights is empty

    /* Remove the last element of a container */
    printf("Temp 1 = %f \n", temperatures.at(0)); // Temp 1 = 36.500000
    temperatures.pop_back();
    if (temperatures.empty()) {
    	printf("temperatures is now empty \n");
    }
    // temperatures is now empty
}

/**
Unlike array<> you can compare two vector<> having different length
Like array<>, assigning one vector to another copies all elements 
from the former into the latter even if the vector is shorter.  
Also a vector<> can be stored in a container

Tip If you know the exact number of elements at compile time, use std::array<>. 
Otherwise, use std::vector<>.
**/