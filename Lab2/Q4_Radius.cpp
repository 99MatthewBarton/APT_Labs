#include <iostream>
#include <cmath>
#define Pi 3.14

float areaOfCircle (float radius) {
    float area = std::pow((radius * Pi), 2);
    return area;
}

int main () {
    float radius;
    std::cout << "Enter radius: ";
    std::cin >> radius;
    float area = areaOfCircle(radius);
    std::cout << "The area of the circle is: " << area << std::endl;

    return EXIT_SUCCESS;
}