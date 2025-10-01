#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n =8;
    int arr[8] = {1, -2, 3, 4, -5, 6, -1, 2};

    int currSum = 0, maxSum = INT_MIN;

    for (int val: arr) {
        currSum += val;
        maxSum = max(currSum, maxSum);
    }
        cout << "Maximum subarray is: " << maxSum;
        
        if(currSum < 0) {
            currSum = 0;
        }
    
    return 0;
}