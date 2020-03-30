#include <iostream>

int main () {
    int input;

    std::cout << "Input a number (0-48): ";
    std::cin >> input;

    int colourCode = input / 7;
    std::cout << colourCode << std::endl;
    int num = input % 7;
    std::string colour;

    if (colourCode == 0) {
        colour = "red";
    }
    else if (colourCode == 1) {
        colour = "orange";
    }
    else if (colourCode == 2) {
        colour = "yellow";
    }
    else if (colourCode == 3) {
        colour = "green";
    }
    else if (colourCode == 4) {
        colour = "blue";
    }
    else if (colourCode == 5) {
        colour = "indigo";
    }
    else if (colourCode == 6) {
        colour = "violet";
    }


    std::cout << colour << " " << num << std::endl;

    return EXIT_SUCCESS;
}