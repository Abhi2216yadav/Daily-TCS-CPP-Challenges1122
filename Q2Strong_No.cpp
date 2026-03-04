//Strong Number
#include<iostream>
using namespace std;

int factorial(int num){
    int fac = 1;

    for(int i =1; i<=num ; i++){
        fac *= i;
    }
    return fac;
}

int main(){
    int n;
    cout<< " Enter number to check Strong Number : ";
    cin>>n;

    if(n < 0){
        cout<< "Enter positive number";
        return 0;
    }

    int temp = n; 
    int sum = 0;

    while(n > 0){
        int rem = n%10;
        sum += factorial(rem);
        n /= 10;
    }

    if(temp == sum){
        cout<<temp << " is a Strong Number";
    }else{
        cout<<temp << " is not a Strong Number";
    }
    return 0;
}