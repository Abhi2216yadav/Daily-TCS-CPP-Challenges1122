// Split string into 3 palindromes

#include<iostream>
#include<algorithm>
using namespace std;

bool isPalin(string s){
    string s2 = s;
    reverse(s.begin(), s.end());
    return s == s2;
}

// void Split_string(string st){
//     int c = 0, i;
//     int n  = st.length();
//     if(n < 9){
//         cout<< "Enter big string ";
//         return ;
//     }

//     for( i =0; i<n; i++){
//         int idx = 0;
//         string part = st.substr(idx, i+2);

//         if(isPalin(part)){
//             cout<<part << " ,";
//             idx = i;
//             c++;
//         }
//     }
//     if(c == 3){
//         cout<< "\nYes, String split into 3 Palindrome"<<endl;
//     }else{
//         cout<< "\nNo, String split into 3 Palindrome"<<endl;
//     }

// }

void Split_string(string st){
    int n = st.length();

    if(n < 3){
        cout << "Not possible\n";
        return;
    }

    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){

            string part1 = st.substr(0, i + 1);
            string part2 = st.substr(i + 1, j - i);
            string part3 = st.substr(j + 1);

            if(isPalin(part1) && isPalin(part2) && isPalin(part3)){
                cout << "YES\n";
                cout << part1 << " | " << part2 << " | " << part3 << endl;
                return;
            }
        }
    }

    cout << "NO\n";
}


int main(){
    string st;
    cout<< "Enter any string : ";
    cin>> st;
    Split_string(st);
    return 0;

}