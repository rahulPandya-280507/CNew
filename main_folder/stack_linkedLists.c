#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *push(struct Node *top, int value);
int isEmpty(struct Node *top);
int isFull(struct Node *top);
void linkedListTraversal(struct Node* ptr);
int pop(struct Node **top);
int peek(struct Node *top, int index);
int stackTop(struct Node *top);
int stackBottom(struct Node *top);

int main() {
    // creating top node
    struct Node *top = NULL;

    // pushing elements into the stack
    top = push(top, 0);
    top = push(top, 1);
    top = push(top, 2);

    // popping elements from the stack
    /*
    int val = pop(&top);
    printf("Popped element: %d\n", val);
    */

    // traversing through the stack via linked list
    // linkedListTraversal(top);

    // peeking value at index 2
    /*
    int peek_value = peek(top, 2);
    if (peek_value!=-1) {
        printf("The element at index %d is: %d", 2, peek_value);
    } else {
        printf("Please enter a valid index");
    }
    */

    // top value of stack
    /*
    int top_value = stackTop(top);
    printf("The top value in the stack is: %d\n", top_value);
    */

    // bottom value of stack
    int bottom_value = stackBottom(top);
    printf("The bottom value of the stack is: %d\n", bottom_value);
    return 0;
}

struct Node *push(struct Node *top, int value) {
    if (isFull(top)) {
        printf("Stack Overflow\n");
        return top;
    } else {
        struct Node *n = (struct Node*) malloc(sizeof(struct Node));
        n->data = value;
        n->next = top;
        top = n;
        return top;
    }
}

int isEmpty(struct Node *top) {
    if(top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int isFull(struct Node *top) {
    struct Node *p = (struct Node*) malloc(sizeof(struct Node));
    if(p==NULL) {
        return 1;
    } else {
        return 0;
    }
}

void linkedListTraversal(struct Node* ptr) {
    while(ptr!=NULL) {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int pop(struct Node **top) {
    if(isEmpty(*top)) {
        printf("Stack underflow\n");
    } else {
        struct Node *n = *top;
       * top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(struct Node *top, int index) {
    struct Node* ptr = top;
    for(int i=0; (i<index-1 && ptr!=NULL); i++) {
        ptr = ptr->next;
    }
    if(ptr!=NULL) {
        return ptr->data;
    } else {
        return -1;
    }
}

int stackTop(struct Node *top){
    return top->data;
}

int stackBottom(struct Node *top) {
    struct Node *ptr = top;
    while(ptr->next!=NULL) {
        ptr = ptr->next;
    }
    return ptr->data;
}