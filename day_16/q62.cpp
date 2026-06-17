#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxFreq = 0, element;

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > maxFreq) {
            maxFreq = count;
            element = a[i];
        }
    }

    cout << "Element = " << element;
    return 0;
}
