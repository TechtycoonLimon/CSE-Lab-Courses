#include<iostream>
using namespace std;

int decToBin(int DecNum) {
    int ans = 0, pow = 1;
    while (DecNum > 0) {
    int rem = DecNum % 2;
    DecNum /= 2;

    ans += (rem * pow);
    pow *= 10;
   }

   return ans; //Binary form
}

int main () {
     int DecNum = 10;

     cout << decToBin(DecNum) << endl;

     //If you want to print binary of first 10 numbers
     //for(int i = 1; i <= 10; i++) {
        // cout << "Decimal: " << i << " Binary: " << decToBin(i) << endl;
     //} 

     return 0;
}