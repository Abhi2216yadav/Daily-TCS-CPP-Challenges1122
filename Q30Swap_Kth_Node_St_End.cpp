//Swap Kth node from start & end (spend one hour)

#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

class List{
    Node* head ;
    Node* tail ;

public:

    List(){
        head = tail = NULL;
    }
    void Push_back(int val){

        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        
    }

    void Push_Front(int val){

        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
        
    }

    void display(){
        if(head == NULL) {
            cout<< " Empty Linked list";
            return;
        }else{
            Node* temp = head;
            cout<< "\nLinked list is : ";

            while(temp != NULL){
                cout<< temp->data<< " -> ";
                temp = temp->next;
            }
            cout<< "NULL" <<endl;
        }
    }

    int count(Node* head){
        int c= 1;

        while(head != tail){
            c++;
            head = head->next;
        }
        return c;
    }

    int Swap_Kth_Node(){
        int cont = count(head);
        int val = 0, k;

        cout<< "Enter value of Kth position : ";
        cin>>k;

        if(k > 1 && k < cont){
            
            Node* temp = head;
            Node* prev = head;

            for(int i = 1; i<k; i++){
                prev = temp;
                temp = temp->next;
            }
            val =  temp->data;

            prev->next = temp->next;
            temp->next = NULL;
            delete(temp);
            return val;

        }else{
            cout<< "\nEnter vaild Number "<<endl;
            return -1;
        }
    }

};


int main(){
    List ll;
    int n, val,ch,value;
    while(1){
        cout<<"\n1. Create Node";
        cout<<"\n2.Display Linked list";
        cout<<"\n3. Swap Kth Node from Start";
        cout<<"\n4. Swap Kth Node from End";
        cout<<"\n5. Exit the program";
        cout<<"\nEnter Your choice : ";
        cin>>ch;

        switch(ch){
            case 1: cout<< "\nEnter NUmber of Nodes : ";
                    cin>> n;

                    for(int i = 0; i<n; i++){
                        cout<< "Enter data : ";
                        cin>>val;
                        ll.Push_back(val);
                    }
                    break;

            case 2: ll.display(); break;

            case 3: value = ll.Swap_Kth_Node();
                    if(value != -1)
                    ll.Push_Front(value); 
                    break;
            case 4: value = ll.Swap_Kth_Node();
                     if(value != -1)
                    ll.Push_back(value);
                    break;
            case 5: exit(0);break;

            default : cout<< "\\nEnter valid value "; break;
        }
    }
    
    return 0;
}