#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void traversal(struct Node* head);
int search(struct Node* head, int value);
struct Node* insertAtBeginning(struct Node* head, int data);
struct Node* insertAtEnd(struct Node* head, int data);
struct Node* insertAtIndex(struct Node* head, int data, int index);
struct Node* insertAfterNode(struct Node* head, int data, struct Node* prevNode);
struct Node* deleteFirstNode(struct Node* head);
struct Node* deleteEndNode(struct Node* head);
struct Node* deleteNodeAtIndex(struct Node* head, int index);
struct Node* deleteGivenValue(struct Node* head, int value);

int main() {
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* first = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));

    head->data = 7;
    head->next = first;

    first->data = 8;
    first->next = second;

    second->data = 9;
    second->next = third;

    third->data = 10;
    third->next = head;

    //traversal
    /*
    traversal(head);
    */

    //searching
    /*
    int key = search(head, 7);
    (key!=-1)?printf("Value found at: %d", key):printf("Value not found");
    */

    //insert at beginning
    /*
    struct Node* newHead = insertAtBeginning(head, 20);
    traversal(newHead);
    */

    //insert at end
    /*
    struct Node* newHead = insertAtEnd(head, 20);
    traversal(newHead);
    */

    //insert at a given index
    /*
    struct Node* newHead = insertAtIndex(head, 20, 6);
    traversal(newHead);
    */

    //insert after a node
    /*
    struct Node* newHead = insertAfterNode(head, 30, second);
    traversal(newHead);
    */

    //deletes first node
    /*
    struct Node* newHead = deleteFirstNode(head);
    traversal(newHead);
    */

    //deletes the last node
    /*
    struct Node* newHead = deleteEndNode(head);
    traversal(newHead);
    */

    //deletes the node from a particular index
    /*
    struct Node* newHead = deleteNodeAtIndex(head, 2);
    traversal(newHead);
    */


    //deletes a given value
    /*
    struct Node* newHead = deleteGivenValue(head, 100);
    traversal(newHead);
    */
    return 0;
}

void traversal(struct Node* head) {
    struct Node* p = head;
    do {
        printf("element: %d\n", p->data);
        p = p->next;
    } while(p!=head);
}

int search(struct Node* head, int value) {
    struct Node* p = head;
    int count = 0;
    do {
        if(p->data == value) {
            return count;
        }
        p = p->next;
        count++;
    } while (p!=head);
    return -1;
}

struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* p = (struct Node*) malloc(sizeof(struct Node));
    p->data = data;
    struct Node* q = head;
    while(q->next!= head){
        q = q->next;
    }
    q->next = p;
    p->next = head;
    head = p;
    return head;
}

struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    struct Node* q = head;
    while(q->next!= head){
        q = q->next;
    }
    q->next = p;
    p->next = head;
    return head;
}

struct Node* insertAtIndex(struct Node* head, int data, int index){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    struct Node* q = head;
    int i=0;
    while(i<index-1){
        q = q->next;
        i++;
    }
    p->next = q->next;
    q->next = p;
    return head;
}

struct Node* insertAfterNode(struct Node* head, int data, struct Node* prevNode){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->next = prevNode->next;
    prevNode->next = p;
    return head;
}

struct Node* deleteFirstNode(struct Node* head){
    struct Node* p = head;
    struct Node* q = head;
    while(q->next!=head){
        q = q->next;
    }
    head = head->next;
    q->next = head;
    free(p);
    return head;
}

struct Node* deleteEndNode(struct Node* head){
    struct Node* p = head;
    struct Node* q = p->next;
    while(q->next!=head){
        p = p->next;
        q = q->next;
    }
    p->next = head;
    free(q);
    return head;
}

struct Node* deleteNodeAtIndex(struct Node* head, int index){
    struct Node* p = head;
    struct Node* q = p->next;
    int i=0;
    while(i<index-1){
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node* deleteGivenValue(struct Node* head, int value){
    int index = search(head, value);
    if(index!=-1){
        struct Node* newHead = deleteNodeAtIndex(head, index);
        return newHead;
    } else {
        printf("Value not found!");
    }
}