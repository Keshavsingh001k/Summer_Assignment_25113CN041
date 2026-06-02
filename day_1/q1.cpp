#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "The larger number is: " << a << std::endl;
    } else if (b > a) {
        std::cout << "The larger number is: " << b << std::endl;
    } else {
        std::cout << "Both numbers are equal." << std::endl;
    }

    return 0;
}
