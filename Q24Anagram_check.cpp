// Anagram check

#include<iostream>
#include<algorithm>

using namespace std;

bool anagram(string &st1, string &st2){
    int s1 = st1.length();
    int s2  = st2.length();

    if(s1 != s2) return false;

    sort(st1.begin(),st1.end());
    sort(st2.begin(),st2.end());

     
    return (st1 == st2);
}

int main(){
    string st1;
    cout<< "Enter Any String : ";
    cin>> st1;

    string st2;
    cout<< "Enter Any String : ";
    cin>> st2;

    
    if(anagram(st1, st2)){
        cout<< "Anagram string";
    }else{
        cout<< "Not an Anagram string";
    }
    
    return 0;

}
// Enter Any String : abhay
// Enter Any String : yahba
// Anagram string