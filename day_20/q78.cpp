#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    bool symmetric = true;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] != a[j][i])
                symmetric = false;
        }
    }

    if(symmetric)
        cout << "Symmetric";
    else
        cout << "Not Symmetric";

    return 0;
}