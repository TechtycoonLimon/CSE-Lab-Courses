#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    if (head == NULL) {
        printf("\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int data){
    struct Node* newNode = createNode(data);
    
    if (head == NULL){
        newNode->next = newNode;
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != head){
        temp = temp->next;

    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

int main() {
    struct Node* head = NULL;
    int arr[] = {16, 94, 55, 70, 53, 19};
    int size = 6;
    for (int i = 0; i < size; i++){
        head = insertAtEnd(head, arr[i]);
    }

    printf("Circular Linked List: ");
    printList(head);
    return 0;
}