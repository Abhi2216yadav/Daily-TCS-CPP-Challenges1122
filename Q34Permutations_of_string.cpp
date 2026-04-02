//Permutations of a string

#include<iostream>
#include<vector>
using namespace std;

void getPer(string s, int idx){
    if(idx == s.length()){
        cout<<"[ "<< s<< " ], ";
        return;
    }

    for(int i = idx; i< s.length(); i++){
        swap(s[idx], s[i]);
        getPer(s,idx+1);
        swap(s[idx], s[i]);//back tracking
    }
}

int main(){
    string s;
    cout<< "Enter any string  :";
    cin>>s;

    getPer(s,0);
    return 0;
    
}