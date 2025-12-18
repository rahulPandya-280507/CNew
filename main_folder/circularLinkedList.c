#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* traversal(struct Node* head);
int search(struct Node* head, int value);
struct Node* insertAtBeginning(struct Node* head, int data);
struct Node* insertAtEnd(struct Node* head, int data);
struct Node* insertAtIndex(struct Node* head, int data, int index);
struct Node* insertAfterNode(struct Node* head, int data, struct Node* prevNode);

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
    return 0;
}

struct Node* traversal(struct Node* head) {
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