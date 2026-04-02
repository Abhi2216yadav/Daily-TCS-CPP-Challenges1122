// Reverse a string

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string st;
    cout<< "Enter Any String : ";
    cin>> st;

    int i = 0, j = st.length()-1;

    while(i < j){
        swap(st[i] , st[j]);
        i++; j--;
    }

    cout<<"Reverse string  : "<<st<<endl;
    return 0;
}