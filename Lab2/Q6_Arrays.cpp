#include <iostream>

int main () {
    int nums [10] = {};
    int sum;
    
    for (int i = 0; i < 10; i++) {
        std::cout << "Enter integer " << i + 1 << std::endl;
        std::cin >> nums[i];
    }

    for (int x: nums) {
        sum = sum + x;
    }
    std::cout << "The sum of the array is: " << sum << std::endl;

    return EXIT_SUCCESS;
}