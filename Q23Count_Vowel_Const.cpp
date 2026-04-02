//Count vowels and consonants

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string st;
    cout<< "Enter Any String : ";
    cin>> st;

    transform(st.begin(), st.end(), st.begin(), ::tolower);
    int vowl = 0;
    int cont = 0;

    for(char ch : st){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vowl++;
        }else{
            cont++;
        }
    }

    cout<< "Numbr of Vowel = "<< vowl<<endl;

    cout<< "Number of Consonent "<< cont << endl;
    return 0;
}