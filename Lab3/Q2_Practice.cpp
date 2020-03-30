#include <iostream>

void ptr_change(double *ptr, double changeTo) {
    *ptr = changeTo;
}

void ref_change(double &ref, double changeTo) {
    ref = changeTo;
}

int main() {
    int x = 7;
    std::cout << x << std::endl;

    int *x_ptr = &x;
    x = 8;
    std::cout << *x_ptr << std::endl;

    *x_ptr = 9;
    std::cout << *x_ptr << std::endl;

    double y = 1.1;
    std::cout << y << std::endl;

    ptr_change(&y, 2.2);
    std::cout << y << std::endl;

    ref_change(y, 3.3);
    std::cout << y << std::endl;
}