#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    bool isPrime = true;
    for (int i = 2; i <= n-1; i++) { // use i * i <= n for optimization
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if ( isPrime == true ) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
}