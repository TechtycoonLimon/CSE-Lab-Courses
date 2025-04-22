#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void printList(struct Node* head){
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int data){
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
int main() {
    struct Node* head = NULL;
    int arr[] = {11, 55, 69, 9, 63, 29};
    int size = 6;

    for (int i = 0; i < size; i++) {
        head = insertAtEnd(head, arr[i]);
    }

    printf("Doubly Linked List: ");
    printList(head);
    return 0;
}