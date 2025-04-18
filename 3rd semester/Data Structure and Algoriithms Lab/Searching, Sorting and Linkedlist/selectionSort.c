#include <stdio.h>

void printArray(int* arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int* arr, int size){
    for (int i = 0; i < size - 1; i++) {
        int smallestIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[smallestIndex]){
                smallestIndex= j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallestIndex];
        arr[smallestIndex] = temp;
      }
}
int main(){
    int arr[] = {4, 5, 1, 3, 6, 2};
    int size = 6;
  
    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}