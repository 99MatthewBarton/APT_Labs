#include <iostream>
#include <string>

int main () {
    int numOfStars = 6;

    // Stars 3a
    std::string stars1;
    for (int i = 0; i < numOfStars; i++) {
        stars1 = stars1 + "*";
        std::cout << stars1 << std::endl;
    }
    
    // Stars 3b
    for (int i = 1; i < numOfStars + 1; i++) {
        std::string stars2;
        for (int j = 0; j < numOfStars - i; j++) {
            stars2 = stars2 + " ";
        }

        for (int j = 0; j < i; j++) {
            stars2 = stars2 + "*";
        }

        std::cout << stars2 << std::endl;
    }

    // Stars 3c
    for (int i = 1; i < numOfStars + 1; i++) {
        std::string stars2;
        for (int j = 0; j < numOfStars - i; j++) {
            stars2 = stars2 + " ";
        }

        for (int j = 0; j < i; j++) {
            stars2 = stars2 + "*";
        }

        if (i != 1) {
            for (int j = 1; j < i; j++) {
                stars2 = stars2 + "*";
            }
        }

        std::cout << stars2 << std::endl;
    }
    
// Stars 3d 
    for (int i = 1; i < numOfStars + 1; i++) {
        std::string stars2;
        for (int j = 0; j < numOfStars - i; j++) {
            stars2 = stars2 + " ";
        }

        for (int j = 0; j < i; j++) {
            stars2 = stars2 + "*";
        }

        if (i != 1) {
            for (int j = 1; j < i; j++) {
                stars2 = stars2 + "*";
            }
        }

        std::cout << stars2 << std::endl;
    }
    
    for (int i = numOfStars - 1; i > 0; i--) {
        std::string stars2;
        for (int j = 0; j < numOfStars - i; j++) {
            stars2 = stars2 + " ";
        }

        for (int j = 0; j < i; j++) {
            stars2 = stars2 + "*";
        }

        if (i != 1) {
            for (int j = 1; j < i; j++) {
                stars2 = stars2 + "*";
            }
        }

        std::cout << stars2 << std::endl;
    }

    return EXIT_SUCCESS;
}