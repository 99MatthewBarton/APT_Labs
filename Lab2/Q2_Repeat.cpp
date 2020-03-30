#include <iostream>
#include <string>

int main () {
    std::string name;
    int age;
    std::string dateOfBirth;

    std::cout << "Enter name: ";
    getline(std::cin, name);

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter date of birth (dd/mm/yyyy): ";
    std::cin >> dateOfBirth;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "DOB: " << dateOfBirth << std::endl;

    return EXIT_SUCCESS;
}