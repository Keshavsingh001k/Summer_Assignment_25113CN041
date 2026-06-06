#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    // Use long long to prevent early overflow for larger numbers
    long long t1 = 0, t2 = 1, nextTerm = 0;

    std::cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Print the current term
        std::cout << t1 << " ";

        // Calculate the next term
        nextTerm = t1 + t2;
        
        // Shift values for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }
    
    std::cout << std::endl;
    return 0;
}
