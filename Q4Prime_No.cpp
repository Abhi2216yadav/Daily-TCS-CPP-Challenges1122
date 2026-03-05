// Prime number in a range
#include<iostream>
using namespace std;

bool prime(int num){   

    if(num == 1) return false;

    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
  
    int lower , upper;
    cout<< " Enter Lower and  Upper range for prime number : ";
    cin>>lower>>upper;

    if(lower < 0 || upper < 0){
        cout<< "Enter positive number";
        return 0;
    }

    for(int i = lower; i<= upper; i++){
        if(prime(i)){
            cout<< i << " ";
        }
    }
    return 0;
}