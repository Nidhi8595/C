#include <stdio.h>  
#include <stdlib.h>  
#define MAX_SIZE 100   
// define the structure for the queue  
struct queue {  
    int items[MAX_SIZE];  
    int front;  
    int rear;  
};  
// function to create an empty queue  
struct queue* createQueue() {  
    struct queue* q = malloc(sizeof(struct queue));  
    q->front = -1;  
    q->rear = -1;  
    return q;  
}  
// function to check if the queue is empty  
int isEmpty(struct queue* q) {  
    if (q->rear == -1)  
        return 1;  
    else  
        return 0;  
}  
// function to add an element to the queue  
void enqueue(struct queue* q, int value) {  
    if (q->rear == MAX_SIZE - 1)  
        printf("Queue is full!");  
    else {  
        if (q->front == -1)  
            q->front = 0;  
        q->rear++;  
        q->items[q->rear] = value;  
    }  
}  
// function to remove an element from the queue  
int dequeue(struct queue* q) {  
    int item;  
    if (isEmpty(q)) {  
        printf("Queue is empty");  
        item = -1;  
    } else {  
        item = q->items[q->front];  
        q->front++;  
        if (q->front > q->rear) {  
            q->front = q->rear = -1;  
        }  
    }  
    return item;  
}  
int main() {  
    struct queue* q = createQueue();  
    enqueue(q, 1);  
    enqueue(q, 2);  
    enqueue(q, 3);  
    printf("Dequeued item: %d\n", dequeue(q));  
    printf("Dequeued item: %d\n", dequeue(q));  
    printf("Dequeued item: %d\n", dequeue(q));  
    return 0;  
}  






