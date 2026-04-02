#include<iostream>
#include<stdlib.h>
using namespace std;

void trangal(int n){

    for(int i =1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<< j << " ";
        }
        cout<<endl;
    }
}

void reverse_trangal(int n){

    for(int i =1; i<=n; i++){
        for(int b = 1; b<=n-i; b++){
            cout<< "  ";
        }
        for(int j = 1; j<=i; j++){
            cout<< j << " ";
        }
        cout<<endl;
    }
}

void piramid(int n){

    for(int i = 1; i<=n; i++){
        for(int b = 1; b<=n-i; b++){
            cout<< " ";
        }
        for(int j =1; j<= i; j++){
            cout<< j << " ";
        }
        cout<<endl;
    }
}

void diamond(int n){

    for(int i = 1; i<=n; i++){
        for(int b = 1; b<=n-i; b++){
            cout<< " ";
        }
        for(int j =1; j<= i; j++){
            cout<< j << " ";
        }
        cout<<endl;
    }

    for(int i = 1; i<=n; i++){
        for(int b = 1; b<=i; b++){
            cout<< " ";
        }
        for(int j =1; j<=n-i; j++){
            cout<< j << " ";
        }
        cout<<endl;
    }
}

int main(){
    int n, ch;

    while(1){

        cout<< "\nEnter number of row : ";
        cin>>n;
        cout<< "\n1. Traingal pattarn  ";
        cout<< "\n2. Reverse Trangal pattarn  ";
        cout<< "\n3. Diamond pattarn  ";
        cout<< "\n4. Piramid pattarn  ";
        cout<< "\n5. Exit program ";
        cout<< "\nEnter your choice : ";
        cin>>ch;

        switch(ch){

            case 1: trangal(n); break;
            case 2: reverse_trangal(n); break;
            case 3: diamond(n); break;
            case 4: piramid(n); break;
            case 5: exit(0); break;
            default: cout<< "Enter valid number "; break;
        }
    }

    return 0;

}