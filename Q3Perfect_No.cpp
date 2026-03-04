//Perfect number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< " Enter number to check Perfect Number : ";
    cin>>n;

    if(n < 0){
        cout<< "Enter positive number";
        return 0;
    }

    int sum = 0;

    for(int i =1; i<n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n){
        cout<< n << " is a Perfect Number";
    }else{
        cout<< n << " is not a Perfect Number";
    }
    return 0;
}