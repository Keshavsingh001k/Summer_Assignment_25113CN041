#include <iostream>
#include <cmath>
#include <string>

int main() {
    int num, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::string s = std::to_string(num);
    for (char digit : s) {
        sum += std::pow(digit - '0', s.length());
    }

    std::cout << num << (sum == num ? " is " : " is not ") << "an Armstrong number.\n";
}
