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
struct Node* delFirst(struct Node* head);
struct Node* delBet(struct Node* head, int index);
struct Node* delEnd(struct Node* head);
struct Node* delGivenValue(struct Node* head, int value);

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

    printf("BEFORE DELETION:\n");
    linkedListTraversal(head);


    //insertion code!!!!
    // int data;
    // printf("Enter the data you want to input into the new node: ");
    // scanf("%d", &data);
    //declaration statements
    // struct Node* newHead = insBeg(head, data);   //inserts a new node at the begining of the LL
    // struct Node* head2 = insIndex(head, data, 2);    //inserts a new node on the 2nd index of the LL
    // struct Node* headEnd = insEnd(head, data);   //Inserts a new node at the end of the LL
    // struct Node* headAfter = insAfter(head, second, data);   //inserts a new node after a given node



    //deletion code!!!!
    // struct Node* delFirstHead = delFirst(head);  //deletes first node of LL
    // struct Node* delIndexHead = delBet(head, 2); //deletes the node at a given index.
    // struct Node* delEndHead = delEnd(head);  //deletes the last node of a given LL
    struct Node* delGVHead = delGivenValue(head, 100);


    printf("AFTER DELETION:\n");
    linkedListTraversal(delGVHead);
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

struct Node* delFirst(struct Node* head) {
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node* delBet(struct Node* head, int index) {
    struct Node* p = head;
    int i=0;
    while(i!=index-1) {
        p = p->next;
        i++;
    }
    struct Node* q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

struct Node* delEnd(struct Node* head) {
    struct Node* p = head;
    struct Node* q = p->next;
    while(q->next!=NULL) {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node* delGivenValue(struct Node* head, int value) {
    struct Node* p = head;
    struct Node* q = NULL;
    if(head!=NULL && head->data == value) {
        head = head->next;
        free(p);
        return head;
    }
    while(p!=NULL && p->data!=value) {
        q = p;
        p = p->next;
    }
    if(p==NULL){
        printf("Value not found!\n");
        return head;
    }
    q->next = p->next;
    free(p);
    return head;
}