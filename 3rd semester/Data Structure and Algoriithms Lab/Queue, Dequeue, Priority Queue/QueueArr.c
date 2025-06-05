#include<stdio.h>

#define N 5
int queue[N];
int front = -1, rear = -1;
void enqueue(int x) {
    if (rear == N - 1) {
        printf("Queue is overflow\n");
    } else {
        if (front == -1) {
            front = rear = 0;
            queue[rear] = x;
        } else {
            rear++; 
        }
        queue[rear] = x;
        printf("Enqueued element: %d\n", x);
    }
}

void dequeue() {
    if ( front == -1 && rear == -1) {
        printf("Queue is underflow\n");
    } else if ( front == rear ) {
        front = rear = -1;
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1 ) {
        printf("Queue is empty\n");
    } else {
        for (int i = front; i <= rear; i++) {
            printf("the Queue is %d\n ", queue[i]);
        }
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

int main() {
    enqueue(2);
    enqueue(3);
    enqueue(-1);
    display();
    peek();
    dequeue();
    dequeue();
    peek();
    display();
    return 0;
}