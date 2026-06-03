#include <iostream>

// Function to check if a number is prime
bool isPrime(int n) {
    // 0, 1, and negative numbers are not prime
    if (n <= 1) {
        return false;
    }

    // Check for divisors from 2 up to the square root of n
    // We use i * i <= n to avoid calculating the square root explicitly 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // We found a divisor, so it's not prime
        }
    }
    
    return true; // No divisors found, so it is prime
}
int main() {
    int number;
    
    std::cout << "Enter a number to check: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}