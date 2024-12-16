#include<stdio.h>

int countODD(int arr[], int n);
void reverse(int arr[], int n);
void printArr(int arr[], int n);

int main() {
    int arr[]={1,2,3,4,5};
    reverse(arr, 5);
    printArr(arr, 5);
    printf("The odd numbers is = %d \n", countODD(arr,5));
   return 0;
}
   
void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}   

void reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
        int first_value = arr[i];
        int second_value = arr[n-i-1];
        arr[i] = second_value;
        arr[n-i-1] = first_value;
    }
}

int countODD(int arr[], int n) {
    int count = 0;
    for(int i=0; i<5; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}
