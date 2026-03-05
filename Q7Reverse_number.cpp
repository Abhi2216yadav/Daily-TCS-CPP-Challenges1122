//Reverse a number

#include<iostream>
using namespace std;

int revere(int n){
    int sum = 0;

    while(n > 0){
        sum = (sum*10) + (n%10);
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cout<< "Enter positive number : ";
    cin>>n;

    cout<<"Reverse of Number "<<n << " is : "<<revere(n) <<endl;
    return 0;
}