#include <iostream>
using namespace std;

int main() {
    for(int i=0;i<5;i++) {
        for(char ch='A'; ch<='A'+i; ch++)
            cout<<ch;

        for(char ch='A'+i-1; ch>='A'; ch--)
            cout<<ch;

        cout<<endl;
    }
    return 0;
}