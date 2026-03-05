//Fibonacci series
#include<iostream>
using namespace std;

int Fibo(int n){
    if(n <= 1) return n;

    return Fibo(n-1)+Fibo(n-2);
}

int main(){
    int n;
    cout<< "Enter positive number : ";
    cin>>n;

    cout<< "\nFibonacci Series : ";
    for(int i = 0; i<n ; i++){
        cout<< Fibo(i)<< " ";
    }
    return 0;

}