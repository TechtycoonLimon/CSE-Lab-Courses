#include<iostream>
using namespace std;

#define SIZE 100  // Changed macro name to avoid conflict

class stack{
    int* arr;
    int top;
    int capacity; // Added a member variable to store stack size

public:
    stack(int size){
        arr = new int[size];
        top = -1;
        capacity = size; // Store the stack size
    }

    void push(int x){
        if(top == capacity - 1){ // Use capacity instead of hardcoded macro
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    void pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }

    ~stack(){
        delete[] arr; // Proper memory cleanup
    }
};

int main(){
    stack s(SIZE); // Use macro name for clarity
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element is: " << s.peek() << endl; // Output: 30
    s.pop();
    cout << "Top element after pop is: " << s.peek() << endl; // Output: 20
    s.pop();
    s.pop();
    s.pop(); // Stack Underflow
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl; // Output: Yes
    return 0;
}
// This code implements a stack using an array with dynamic memory allocation.
// It includes methods for pushing, popping, peeking, and checking if the stack is empty.