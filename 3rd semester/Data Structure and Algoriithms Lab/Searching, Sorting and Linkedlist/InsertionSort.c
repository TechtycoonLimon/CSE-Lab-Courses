#include <stdio.h>

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {

        printf("%d ", arr[i]);
} 
    printf("\n");
}


void insertionSort(int* arr, int size){
    
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        /*
※ arr[j + 1] = key; means: “Put the toy you’re holding (key) in the spot where it belongs.”
※ After the while loop, j has moved to the position where key should go (or just before the start if j becomes -1).
※ Since j is -1, j + 1 is 0, so arr[0] = 2. The list now becomes 2, 5, 4, 6, 1, 3.
*/
        arr[j + 1] = key;
       }
}

int main(){
    
    int arr[] = {5, 2, 4, 6, 1, 3};
    int size = 6;

    printArray(arr, size);
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}