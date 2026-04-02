//Reverse linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;

Node* creatNode(){
    Node* newNode = (Node*)malloc(sizeof(Node));
    printf("Enter Data : ");
    scanf("%d",&newNode->data);
    newNode->next = NULL;
    return newNode;
}

Node* creatList(int n){
    Node* newNode;

    for(int i = 0; i<n; i++){
        newNode = creatNode();
        if(head == NULL){
            newNode->next = head;
            head = newNode;
        }else{
            Node* temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next  = newNode;
            newNode->next = NULL;
        }
    }
    return head;
}

void reverseNode(){
    Node* prev = NULL, *curr = head, *Next = NULL;

    if(head == NULL) return;

    while(curr != NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    head = prev;
}

void display(){
    if(head == NULL){
        printf("Empty Linked list");
        return ;
    }
    Node* temp = head;
    while(temp!= NULL){
        printf("%d -> ", temp->data);
        temp =temp->next;
    }
    printf("NULL\n");
}

int main(){
    int n;
    printf("Enter number of Nodes : ");
    scanf("%d",&n);
    creatList(n);

    printf("\nBefore reverse the linked List is : ");
    display();

    reverseNode();
    printf("\nAfter reverse the linked List is : ");
    
    display();
    return 0;
}