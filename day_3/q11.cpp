#include <iostream>
using namespace std;

// Compact recursive function to find GCD
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "GCD is: " << gcd(a, b) << endl;
    return 0;
}