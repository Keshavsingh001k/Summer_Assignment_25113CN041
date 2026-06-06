#include <iostream>

int main() {
    int num, count = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int temp = num;

    // Loop until all bits are 0
    while (temp > 0) {
        temp = temp & (temp - 1); // Clears the lowest set bit (the rightmost 1)
        count++;
    }

    std::cout << "The number " << num << " has " << count << " set bits.\n";
    
    return 0;
}
