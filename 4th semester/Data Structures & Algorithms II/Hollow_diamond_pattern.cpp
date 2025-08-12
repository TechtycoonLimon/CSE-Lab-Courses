#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (half of diamond): ";
    cin >> n;

    //top half of the diamond
    for (int i = 0; i<n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*"; // Print the first star

        if(i != 0){
            //spaces
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
             cout << "*"; // Print the second star if not the first row
        }
          cout << endl;     
    }

    //bottom half of the diamond
    for (int i = 0; i < n-1; i++) {
        // Print leading spaces
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout << "*";


        if (i != n - 2) {
            //spaces
            for (int j = 0; j < 2 * (n - i) - 5; j++) {
                cout << " ";
            }
            cout << "*"; // Print the second star if not the last row
        }
        cout << endl;
    }

}
  
