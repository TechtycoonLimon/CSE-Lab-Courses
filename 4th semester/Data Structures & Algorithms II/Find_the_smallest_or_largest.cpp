#include <iostream>
#include <climits>
using namespace std;

int main () {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

     int smallest = INT_MAX;
     int largest = INT_MIN;

     for(int i=0; i<size; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
        if(nums[i] > largest) {
            largest = nums[i];
        }    

            //smallest = min(nums[i], smallest); that's the alternative of the "if conditon"
            //largest = max(nums[i], largest); that's the alternative of the "if conditon"
        
     }

     cout << "The smallest number is: " << smallest << endl;
     cout << "The largest number is: " << largest << endl;
     return 0;
}