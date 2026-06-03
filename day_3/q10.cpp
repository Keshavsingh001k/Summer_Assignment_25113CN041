#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (i <= 1) continue; // Skip 1, 0, and negative numbers
        
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
    cout << endl;
    return 0;
}