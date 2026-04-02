//String compression

#include<iostream>
#include<algorithm>
#include <unordered_map>

using namespace std;

string Compression(string st){
    string st2 = "";
    int n = st.length();
    unordered_map<char, int> mp;

    for(int i =0; i<n; i++){
        mp[st[i]]++;
    }

    for(int i =0; i<n; i++){
        if(mp[st[i]] == 1){
            st2.push_back(st[i]);
        }
        if(mp[st[i]] > 1){
            st2.push_back(st[i]);
            mp[st[i]] = -1;
        }
    }
    return st2;
}

int main(){
    string st;
    cout<< "Enter Any String : ";
    cin>> st;

    cout<<Compression(st) <<endl;

    return 0;
}