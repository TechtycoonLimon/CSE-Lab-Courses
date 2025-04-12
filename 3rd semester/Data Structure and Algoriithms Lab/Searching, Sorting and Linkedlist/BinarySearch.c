#include<stdio.h>

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;

    // Start searching
    while (low <= high) {
        mid = (low + high) / 2; 
        if (arr[mid] == element) {
            return mid; // Element found
        }
        if (arr[mid] < element) {
            low = mid + 1; // Move right
        } else {
            high = mid - 1; // Move left
        }
    }

    // Element not found
    return -1;
}

int main() {
    int arr[] = {1, 4, 5, 7, 43, 73, 87, 98, 103, 312, 459, 633};
    int size = sizeof(arr) / sizeof(int);
    int element = 312;
    int searchindex = binarySearch(arr, size, element); // Function call
    printf("The element %d was found at index %d\n", element, searchindex);
    return 0;
}
