#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Queue {
    int size;
    int f;
    int r;
    int *arr;
};

void enqueue(struct Queue *q, int val);
int dequeue(struct Queue *q);
int isEmpty(struct Queue *q);
int isFull(struct Queue *q);

int main() {
    struct Queue q;
    q.size = 10;
    q.f = q.r = 0;
    q.arr = (int *) malloc(q.size * sizeof(int));

    printf("Is Empty: %d\n", (bool)isEmpty(&q));
    
    enqueue(&q, 2);
    
    printf("Is Empty: %d\n", (bool)isEmpty(&q));
    
    printf("The value dequeued is: %d\n", dequeue(&q));
    
    printf("Is Empty: %d\n", (bool)isEmpty(&q));
    
    printf("The value dequeued is: %d\n", dequeue(&q));
    
    printf("Is Empty: %d\n", (bool)isEmpty(&q));

    return 0;
}

void enqueue(struct Queue *q, int val) {
    if(isFull(q)) {
        printf("Queue overflow!\n");
    } else {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct Queue *q) {
    int val = -1;
    if(isEmpty(q)) {
        printf("Empty queue!\n");
    } else {
        q->f = (q->f + 1) % q->size;
        val = q->arr[q->f];
    }
    return val;
}

int isEmpty(struct Queue *q) {
    if(q->f == q->r) {
        return 1;
    }
    return 0;
}

int isFull(struct Queue *q) {
    if((q->r + 1) % q->size == q->f) {
        return 1;
    }
    return 0;
}