//Detect loop in linked list

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
            head = newNode;
            newNode->next = head;
        }else{
            Node* temp = head;
            while(temp->next != head)
                temp = temp->next;
            temp->next  = newNode;
            newNode->next = head;
        }
    }
    return head;
}
void Detect_loop(){
    if(head == NULL) return ;

    Node* ptr1 = head;
    Node* ptr2 = head;
    Node* temp = head;

    while(temp->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        temp = temp->next;
        if(ptr1 == ptr2 ){
            printf(" Loop exist ");
            return;
        }
    }
    printf(" Loop does not exist ");
    return;
}

void display(){
    if(head == NULL){
        printf("Empty Linked list");
        return ;
    }
    Node* temp = head;
    do{
        printf("%d -> ", temp->data);
        temp =temp->next;
    }while(temp!= head);
    printf("head\n");
}

int main(){
    int n;
    printf("Enter number of Nodes : ");
    scanf("%d",&n);
    creatList(n);

    printf("\n linked List is : ");
    display();
    
    Detect_loop();
    return 0;
}