#include <stdio.h>
//Function create
void printArray(int* A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
//BubbleSort Function create
void bubbleSort(int* A, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) { 
            if (A[j] > A[j + 1]) {
                

                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
      }  
}

int main(){
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n); 
    bubbleSort(A, n); 
    printArray(A, n); 
    return 0;
} 