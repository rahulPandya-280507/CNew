/*
Author: Rahul Pandya
this is a file that explains the traversal, creation, insertiion, deletion of linked list
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr);
struct Node* insBeg(struct Node* head, int data);
struct Node* insIndex(struct Node* head, int data, int index);
struct Node* insEnd(struct Node* head, int data);
struct Node* insAfter(struct Node* head, struct Node* prevNode, int data);

int main() {
    //creation of nodes
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 7;
    head->next = second;

    second -> data = 8;
    second->next = third;

    third -> data = 9;
    third->next = fourth;

    fourth->data = 10;
    fourth->next=NULL;

    printf("BEFORE INSERTION:\n");
    linkedListTraversal(head);

    // int data;
    // printf("Enter the data you want to input into the new node: ");
    // scanf("%d", &data);

    // struct Node* newHead = insBeg(head, data);   //inserts a new node at the begining of the LL
    // struct Node* head2 = insIndex(head, data, 2);    //inserts a new node on the 2nd index of the LL
    // struct Node* headEnd = insEnd(head, data);   //Inserts a new node at the end of the LL
    // struct Node* headAfter = insAfter(head, second, data);   //inserts a new node after a given node

    printf("AFTER INSERTION:\n");
    // linkedListTraversal(headAfter);
    return 0;
}

//traversal of linked list
void linkedListTraversal(struct Node* ptr) {
    while(ptr!=NULL) {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//inserting a node at the begining of the LL
struct Node* insBeg(struct Node* head, int data) {
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    head = ptr;
    return head;
}

struct Node* insIndex(struct Node* head, int data, int index) {
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node* insEnd(struct Node* head, int data) {
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;
    while(p->next!=NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node* insAfter(struct Node* head, struct Node* prevNode, int data) {
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}