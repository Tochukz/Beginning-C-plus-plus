#include <iostream> 
#include <iomanip>

int main() {
	double carrots[3][4] {};
    carrots[0][0] = 12.5;
    carrots[2][1] = 17.6;
    carrots[2][3] = 19.1;

    printf("Carrot Grid \n");
    for (int x {}; x < std::size(carrots); x++) {
    	for (int y {}; y < std::size(carrots[x]); y++) {
    		std::cout << std::setw(8) << carrots[x][y];
    	}
    	std::cout << std::endl;
    } 

    double cucumbers[4][4] {
						    	{12.5, 14.5, 11.9},
						    	{10.2, 14.0 },
						    	{16.2, 17.6, 13.7, 19.1}
						   };
	printf("Cucumber Grid \n");
	std::cout << std::fixed << std::setprecision(1);
    for (int i {}; i < std::size(cucumbers); i++) {
    	for(int j {}; j < std::size(cucumbers[i]); j++) {
    		std::cout << std::setw(8) << cucumbers[i][j];
    	}
    	std::cout << std::endl;
    }

    printf("Excercises Grid \n");
    double exercises[3][4] {1.1, 1.2, 1.3, 1.3, 1.5, 1.6, 1.7};
    for (int i {}; i < std::size(exercises); i++) {
    	for(int j {}; j < std::size(exercises[i]); j++) {
    		std::cout << std::setw(8) << exercises[i][j];
    	}
    	std::cout << std::endl;
    }

    double onions[][4] {
                            {2.1, 1.5, 2.7},
                            {2.8},
                            {1.6, 2.0}
                        };

    printf("Onions Grid \n");
    std::cout << std::fixed << std::setprecision(1);
    for (int k {}; k < std::size(onions); k++) {
    	for(int l {}; l < std::size(onions[k]); l++) {
    		std::cout << std::setw(8) << onions[k][l];
    	}
    	std::cout << std::endl;
    }

    /*In 2 Dimensional char array, you do not need the inner braces, the quotes does that for you. */
    char stars[][40] {
    					"Robert Redford",
    					"Hopalong Cassidy",
    					"Lassie",
    					"Slim Pickens",
    					"Boris Karloof",
    					"Olive Hardy"
    				 }; 
    printf("Charater Array \n");
    for(int p {}; p < std::size(stars); p++) {
    	for(int q {}; q < std::size(stars[p]); q++) {
    		std::cout << std::setw(2) << stars[p][q];
    	}
    	std::cout << std::endl;
    }
}