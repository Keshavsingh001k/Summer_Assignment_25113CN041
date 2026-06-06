#include <iostream>

int main() {
    int num, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Loop to find all proper divisors up to num/2
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // A perfect number must equal the sum of its divisors and be greater than 0
    if (sum == num && num > 0) {
        std::cout << num << " is a perfect number.\n";
    } else {
        std::cout << num << " is not a perfect number.\n";
    }
    return 0;
}
