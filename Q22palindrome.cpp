// Palindrome check

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter number to check Palindrome : ";
    cin>>n;

    int temp = n;
    int sum = 0;

    while(n > 0){
        sum = (sum*10) + (n%10);
        n /= 10;
    }

    if( sum == temp){
        cout<< "Number is a Palindome NUmber ";
    }else{
        cout<< "Number is not a Palindome NUmber ";
    }
    return 0;
}