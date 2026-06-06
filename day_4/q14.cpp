#include <iostream>

// Function to calculate the n-th Fibonacci term (0-indexed)
long long findNthFibonacci(int n) {
    // Base cases: F(0) = 0, F(1) = 1
    if (n <= 1) {
        return n;
    }

    long long a = 0, b = 1, nextTerm;
    
    // Iterate from 2 up to n
    for (int i = 2; i <= n; ++i) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    
    return b;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Call the function and print the result
    std::cout << "The " << n << "th Fibonacci term is: " << findNthFibonacci(n) << std::endl;
    
    return 0;
}