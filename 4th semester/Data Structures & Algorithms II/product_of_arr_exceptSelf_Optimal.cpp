#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size(); 
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);

    //prefix array
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    //suffix array
    for(int i=n-2; i>=0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    //final ans array
    for(int i=0; i<n; i++) {
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

int main() {
    cout << "Enter the size of the nums array: ";
    int n;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the nums array: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = productExceptSelf(nums);
    cout << "The product of array except self is: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
    
}