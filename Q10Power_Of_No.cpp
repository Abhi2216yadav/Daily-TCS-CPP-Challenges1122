//Power of number without pow()

#include<iostream>
using namespace std;
//this code only work properly  below for pow 7 above wrong answer
long long power(int n,int a){
    static long long ans = 1;

    if(a == 0) return 1;
    if(a == 1) return n;
    if(a == 2) return n*n;
    if(a == 3) return n*n*n;

    if(a%2 != 0){
        ans *= n;
    }
    ans *= power(n, a/2);
    ans *= power(n, a/2);
    return ans;
}

int main(){
    int n, a;
    cout<< "Enter positive number and power value : ";
    cin>>n >> a;

    cout<<power(n,a) <<endl;
    return 0;
}