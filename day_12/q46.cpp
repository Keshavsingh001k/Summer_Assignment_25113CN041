#include <iostream>
using namespace std;

bool armstrong(int n){
    int sum=0,temp=n;

    while(temp){
        int d=temp%10;
        sum+=d*d*d;
        temp/=10;
    }

    return sum==n;
}

int main() {
    int n;
    cin>>n;

    if(armstrong(n))
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";

    return 0;
}