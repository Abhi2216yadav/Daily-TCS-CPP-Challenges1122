//First non-repeating character

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string st;
    cout<< "Enter Any String : ";
    cin>> st;
    
    int n = st.length();
    bool flag ;
    transform(st.begin(), st.end(), st.begin(), ::tolower);

    cout<<"First non-repeating character : ";

    for(int i =0; i<n ; i++){
        for(int j = i+1; j<n; j++){
            flag = true;
            if(st[i] == st[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<< st[i] <<endl;
            break; 
        }
    }
    return 0;
}