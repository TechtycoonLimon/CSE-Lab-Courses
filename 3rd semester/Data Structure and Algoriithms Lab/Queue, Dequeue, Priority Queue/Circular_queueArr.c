#include <stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else if (((rear + 1) % N) == front) {
        printf("The queue is overflow\n");
    } else {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("The queue is underflow\n");
    } else if (front == rear) {
        front = rear = -1;
    } else {
        printf("The dequeue element is %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void display(){
    if (front == -1 && rear == -1) {
        printf("The queue is empty\n");
    } else {
        int i = front;
        printf("The queue elements are: ");
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % N;
        }
         printf("%d\n", queue[rear]); // Print the last element
    }
}

int main() {
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);

    dequeue();
    dequeue();

    display();
    return 0;
}