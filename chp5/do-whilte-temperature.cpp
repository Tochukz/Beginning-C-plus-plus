#include <iostream>
#include <cctype>

int main() {
    char reply {};
    float temperature {};
    float totalTemperature {};
    int count {};
    do {
        std::cout << "Enter a temperature: ";
        std::cin >> temperature;

        totalTemperature += temperature;
        count++;

        std::cout << "Do you want to enter another temperature (y/n)? ";
        std::cin >> reply;
    } while(std::tolower(reply) == 'y');

    float averageTemperature { totalTemperature / count };
    std::cout << "Average Temperature = " << averageTemperature << std::endl;
}