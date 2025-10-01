#include<iostream>
#include<vector>
using namespace std;

class solution {
public: 
      int singleNumber(vector<int> &nums) {
        int ans = 0;

        for(int val: nums){
            ans = ans ^ val;
        }

        return ans;
      }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
     for(int &val : nums) { 
        cin >> val; 
    }

    solution sol;
    int result = sol.singleNumber(nums);
    cout << "The single number is: " << result << endl;

    
}