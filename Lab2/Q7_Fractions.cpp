#include <iostream>

int main () {
    int iterations;
    float sum;

    std::cout << "Number of iterations: ";
    std::cin >> iterations;

    for (int i = 0; i < iterations; i++)
    {
        float fraction = (1 / (((float)i * 2) + 1));

        if (i % 2 == 0) {
            sum = sum + fraction;
        }
        else if (i % 2 == 1) {
            sum = sum - fraction;
        }
    }
    sum = sum * 4;
    std::cout << sum << std::endl;
    
    return EXIT_SUCCESS;
}