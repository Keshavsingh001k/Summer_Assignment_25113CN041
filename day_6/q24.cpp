#include <iostream>

int main() {
    long long x; 
    int n;
    long long result = 1;

    std::cout << "Enter base and exponent: ";
    std::cin >> x >> n;

    // Fast exponentiation loop
    while (n > 0) {
        // If the exponent is odd, multiply the result by x
        if (n % 2 == 1) {
            result *= x;
        }
        // Square the base and halve the exponent
        x *= x;
        n /= 2;
    }

    std::cout << "Result: " << result << "\n";
    return 0;
}
