//Stack using array

#include<iostream>
using namespace std;
#define max 5

int stack[max];
int top = -1;

void push(){
    int val;

    if(top == max){
        cout<< "\nStack OverFlow"<<endl;
        return;
    }else{
        cout<< "Enter value : ";
        cin>> val;
        
        stack[++top] = val;
    }
}

void pop(){
    if(top == -1){
        cout<< "Stack UnderFlow"<<endl;
        return;
    }else{
        cout<<stack[top--] << " is deleted"<<endl;
    }
}

void display(){
    if(top == -1){
        cout<< "Stack UnderFlow"<<endl;
        return ;
    }else{
        cout<<"\nStack data is : ";
        for(int i = top; i>=0; i--){
            cout<<stack[i] << " ";
        }
        cout<<endl;
    }
}

int main(){
    int ch;

    while(1){

        cout<<"\n1.Push data"<<endl;
        cout<<"2.Pop data"<<endl;
        cout<<"3.Display data"<<endl;
        cout<<"4.Exit program"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;

        switch (ch)
        {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: display();break;
        case 4: exit(0); break;
      
        default: cout<<"\nEnter valid number"<<endl;
            break;
        }
    }
    return 0;
}