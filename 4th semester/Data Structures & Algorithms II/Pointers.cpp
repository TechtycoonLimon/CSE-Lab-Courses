// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
  int a = 10;
  
  int* ptr = &a;
  
  int** parptr = &ptr; 
  
  int** ptr2 = NULL;
  
  cout << *(ptr) << endl;
  cout << **(parptr) << endl;
  cout << *(parptr) << endl;
  cout << &a << endl;
  cout << &ptr << endl;
  cout << parptr << endl;
  cout << ptr2 << endl;
  
  

    return 0;
}
