#include<stdio.h>

#define N 5
int deque [N];
int F = -1 , R = -1;

void enqueuefront(int x) {
    if ((F == 0 && R == N-1) || (F == R + 1)) {
        printf("Queue is overflow\n");
    } else if (F == -1 && R == -1) {
        F = R = 0;
        deque [F] = x;
    } else if (F == 0) {
        F = N - 1;
        deque [F] = x;
    } else {
        F --;
        deque [F] = x;
    }
}

void enqueuerear(int x) {
    if ((F == 0 && R == N - 1) || (F == R + 1)) {
        printf("The queue is overflow\n");
    } else if (F == -1 && R == -1) {
        F = R = 0;
        deque [R] = x;
    } else if (R == N - 1) {
        R = 0;
        deque [R] = x;
    } else {
        R++;
        deque [R] = x;
    }
}

void dequeuefront(){
    if(F == -1 && R == -1) {
        printf("The queue is underflow\n");
    } else if (F == R) {
        printf("Deleted from front: %d\n", deque[F]);
        F = R = -1;
    } else if (F == N - 1) {
        printf("Deleted from front: %d\n", deque[F]);
        F = 0;
    } else {
        printf("Deleted from front: %d\n", deque[F]);
        F++;
    }
}

void dequeuerear(){
    if(F == -1 && R == -1) {
        printf("The queue is underflow\n");
    } else if (F == R) {
        printf("Deleted from rear: %d\n", deque[R]);
        F = R = -1;
    } else if (R == 0) {
        printf("Deleted from rear: %d\n", deque[R]);
        R = N - 1;
    } else {
        printf("Deleted from rear: %d\n", deque[R]);
        R--;
    }
}

void Display() {
    int i = F;
    if (F == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("The queue is: ");
    while (i != R) {
        printf("%d ", deque[i]);
        i = (i + 1) % N;
    }
    printf("%d\n", deque[R]);
}

void getfront(){
    if (F == -1 && R == -1) {
        printf("Queue is empty\n");
    } else {
        printf("The front of queue is %d\n", deque[F]);
    }
}

void main(){
    enqueuefront(2);
    enqueuefront(5);
    enqueuerear(-1);
    enqueuerear(0);
    enqueuefront(7);
    enqueuefront(4);
    dequeuefront();
    dequeuerear();
    Display();
    getfront();
}