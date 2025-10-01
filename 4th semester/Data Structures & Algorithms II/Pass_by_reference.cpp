#include<iostream>
using namespace std;

void ChangeArr(int arr[], int size) {
    cout << "in function\n";
    for(int i=0; i<size; i++) {
        arr[i] = 2*arr[i];
    }
}

int main () {
    int arr[] = {1,2,3};
    
    ChangeArr(arr, 3);

    cout << "In main Function\n";
    for(int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}