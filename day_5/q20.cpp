#include <iostream>

int main() {
    long long num, maxPrime = -1;
    std::cout << "Enter a number: ";
    std::cin >> num;

    long long originalNum = num; // Just for the final print statement

    // Step 1: Strip out all 2s (the only even prime number)
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    // Step 2: Check odd numbers from 3 up to the square root of the remaining number
    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i; // Shrink the number as we find factors
        }
    }

    // Step 3: If the remaining number is greater than 2, it is the largest prime itself
    if (num > 2) {
        maxPrime = num;
    }

    std::cout << "The largest prime factor of " << originalNum << " is " << maxPrime << ".\n";
    
    return 0;
}
