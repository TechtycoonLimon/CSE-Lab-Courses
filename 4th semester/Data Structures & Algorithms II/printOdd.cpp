#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {  
        if (i % 2 != 0) {             // just remove the ! to print even numbers
            cout << i << " ";
        }
    }
        return 0;
}