#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Factors of " << num << " are: ";
    
    // Loop from 1 up to the number itself
    for (int i = 1; i <= num; ++i) {
        // If the number is evenly divisible by 'i', it's a factor
        if (num % i == 0) {
            std::cout << i << " ";
        }
    }
    
    std::cout << "\n";
    return 0;
}
