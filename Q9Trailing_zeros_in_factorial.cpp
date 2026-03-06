//Trailing zeros in factorial : means count zero that appear in last of number while calculating factorial of a number

#include<iostream>
using namespace std;

int Trailing_Zero(int n){
    int sum = 0;
    int div = 5;
    
    while((n / div) > 0){
        sum += n / div;
        div *= 5;
    }
    
    return sum;
}

int main(){
    int n;
    cout<< "Enter positive number : ";
    cin>>n;

    cout<<"\nTrailing zeros in factorial is : "<<Trailing_Zero(n) <<endl;
    return 0;
}