#include<stdio.h>
//Function
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,4,5,7,43,73,22,67,90,3,9,33};
    int size = sizeof(arr)/sizeof(int);
    int element = 7;
    int searchindex = linearSearch(arr, size, element);//Function call
    printf("The  element %d was found at index %d \n", element, searchindex);
    return 0;
}