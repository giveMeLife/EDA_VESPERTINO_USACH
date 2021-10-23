#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int data;
    struct node* next;
}; 
typedef struct node Node;

void print_list(Node* head){
    Node* aux = head;
    while(aux!=NULL){
        printf("%d ",aux->data);
        aux = aux->next;
    }
    printf("\n");
}

void add(Node* head, int data){
    if(head == NULL){
        Node* new = (Node*)malloc(sizeof(Node));
        new->data = data;
        new->next = NULL;
        head = new;
    }
    else{
        Node* aux = head;
        Node* new = (Node*)malloc(sizeof(Node));
        new->data = data;
        new->next = NULL;
        while(aux->next!=NULL){ 
            aux = aux->next;
        }
        aux->next = new;
    }
}

Node* push(Node* head, int data){
    Node* aux = (Node*)malloc(sizeof(Node));
    aux->data = data;
    aux->next = head;
    head = aux;
    return head;
}

Node* delete_last(Node* head){
    Node* aux = head;
    while(aux->next->next!=NULL){
        aux = aux->next;
    }
    free(aux->next);
    aux->next = NULL;
}

int main(){
    Node* head = (Node*) malloc(sizeof(Node));
    Node* second = (Node*) malloc(sizeof(Node));
    Node* third = (Node*) malloc(sizeof(Node));

    head->data = 10;
    second->data = 5;
    third->data = 8;
    head->next = second;
    head->next->next = third;
    head->next->next->next = NULL;
    print_list(head);

    printf("################\n");
    add(head, 20);
    add(head, -1);
    print_list(head);
    printf("################\n");

    head = push(head, 1);
    head = push(head, 34);
    print_list(head);
    printf("################\n");
    delete_last(head);
    delete_last(head);
    print_list(head);

    return 0;
}
