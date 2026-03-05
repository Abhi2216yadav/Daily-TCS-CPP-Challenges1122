//Sum of digits until single digit

#include<iostream>
using namespace std;

int SumOfDigit(int n){
    int sum = 0;

    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cout<< "Enter positive number : ";
    cin>>n;

    cout<<"\nSum of Digit of number "<<n << " is : "<<SumOfDigit(n) <<endl;
    return 0;
}