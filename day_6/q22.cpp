#include <iostream>
#include <string>

int main() {
    std::string binary;
    int decimal = 0;
    
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    // Loop through each bit from left to right
    for (char bit : binary) {
        // Multiply the running total by 2 and add the current bit
        decimal = decimal * 2 + (bit - '0');
    }

    std::cout << "Decimal: " << decimal << "\n";
    return 0;
}
