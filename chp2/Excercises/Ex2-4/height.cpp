#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int height {}, distance, degree {};
    double pi {3.142857142857143};
    printf("Enter you height, distance and angle to calculate the length of the tree: ");

    std::cin >> height >> distance >> degree;

    double radian { (degree * 2* pi) / 360}; // converts angle from degree to radian
    double treeHeight { height + distance * tan(radian)};

    std::cout << "Tree height is "
              << std::fixed  
              << std::setprecision(2)
              << treeHeight 
              << std::endl;
}