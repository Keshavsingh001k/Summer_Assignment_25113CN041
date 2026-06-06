#include <iostream>

// Ultra-short recursive function to print binary
void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2); // Divide by 2 until you reach the base case
    }
    std::cout << n % 2;     // Print the remainder on the way back up
}

int main() {
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << "Binary: ";
    printBinary(num);
    std::cout << "\n";
    
    return 0;
    