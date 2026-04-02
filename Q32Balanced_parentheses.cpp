//Balanced parentheses

#include<iostream>
#include<stack>
using namespace std;


bool check_par(string st){
    stack<char> s;

    for(char ch : st){
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }else{
            if(s.size() == 0){
                return false;
            }else{
                if((s.top() == '(' && ch == ')') || (s.top() == '{' && ch == '}') 
                || (s.top() == '[' && ch == ']')){
                    s.pop();
                }
            }
        }
    }
    return (s.size() == 0);
}

int main(){
    string st;
    cout<<"Enter parentheses simbles in any order : ";
    cin>>st;
    if(check_par(st)){
        cout<< " Is a Balanced parentheses";
    }else{
        cout<< " Is not a Balanced parentheses";
    }
    return 0;
}