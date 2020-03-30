#include <iostream>
#include <string>

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

class Card {
public:
    Card(int number, int numberAsInt, std::string colourAsString): number(number), 
    colourAsInt(colourAsInt), colourAsString(colourAsString) {
        rule = findRule(colourAsInt);
    }

    // 4 methods to implement
    int getNumber() {
        return number;
    }

    int getColourAsInt() {
        return colourAsInt;
    }

    std::string getColourAsString() {
        return colourAsString;
    }

    std::string getRule() {
        return rule;
    }

private:
    int number;
    int colourAsInt;
    std::string colourAsString;
    std::string rule;
    
    std::string findRule(int colourAsInt) {
        if (colourAsInt == 0) {
            return "HIGHEST NUMBER WINS";
        }
        else if (colourAsInt == 1) {
            return "MOST OF ONE NUMBER WINS";
        }
        else if (colourAsInt == 2) {
            return "MOST OF ONE COLOUR WINS";
        }
        else if (colourAsInt == 3) {
            return "MOST EVEN CARDS WINS";
        }
        else if (colourAsInt == 4) {
            return "MOST DIFFERENT COLOURS WINS";
        }
        else if (colourAsInt == 5) {
            return "MOST CARDS IN A ROW WINS";
        }
        else if (colourAsInt == 6) {
            return "MOST CARDS BELOW 4 WINS";
        }
    }
};

int main(void) {
    Card red7(7, 0, "RED");
    std::cout << "Number: " << red7.getNumber() << std::endl;
    std::cout << "Colour (int): " << red7.getColourAsInt() << std::endl;
    std::cout << "Colour (string): " << red7.getColourAsString() << std::endl;
    std::cout << "Rule: " << red7.getRule() << std::endl;

    return EXIT_SUCCESS;
}