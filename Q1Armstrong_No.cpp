//Armstrong number check

#include<iostream>
using namespace std;

int pow(int num, int count){
    int ans = 1;
    for(int i =1; i<= count; i++){
        ans *= num;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number to Check Armstrong : ";
    cin>>n;
    int temp = n;
    int count = 0;

    if(n < 0){
        cout<< "Enter positive number";
        return 0;
    }

    while(n > 0){
        n = n/10;
        count++;
    }

    int res = 0;
    n = temp;
    while(n > 0){
        int rem = n%10;
        res += pow(rem,count);
        n /= 10;
    }

    if(temp == res){
        cout<<temp<< " is an Armstrong Number"<< endl;
    }else{
        cout<<temp<< " is not an Armstrong Number"<< endl;
    }
    return 0;
}