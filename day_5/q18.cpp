#include <iostream>

int main() {
    int num, sum = 0;
    // Precomputed factorials for digits 0-9
    int fact[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    std::cout << "Enter a number: ";
    std::cin >> num;

    // Loop through each digit and add its precomputed factorial
    for (int temp = num; temp > 0; temp /= 10) {
        sum += fact[temp % 10];
    }

    // Print the result using a quick inline condition
    std::cout << num << (sum == num ? " is " : " is not ") << "a strong number.\n";
    
    return 0;
}
