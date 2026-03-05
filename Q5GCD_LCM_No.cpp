// GCD & LCM of two numbers

#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(b == 0) return a;
    if(a == 0) return b;

    if(a > b){
        GCD(b, a%b);
    }else{
        GCD(a, b%a);
    }

}

int LCM(int a, int b){
    return (a * b)/(GCD(a, b));
}

int main(){
    int a, b;
    cout<< "Enter two Positive numbers to Check GCD & LCM : ";
    cin>> a >> b;

    cout<< "GCD of two Number is : " <<GCD(a,b)<<endl;

    cout<< "LCM of two Number is : " <<LCM(a,b)<<endl;
    return 0;
}