#include <iostream>
using namespace std;

bool palindrome(int n){
    int rev=0,temp=n;

    while(temp){
        rev=rev*10+temp%10;
        temp/=10;
    }

    return rev==n;
}

int main() {
    int n;
    cin>>n;

    if(palindrome(n))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}