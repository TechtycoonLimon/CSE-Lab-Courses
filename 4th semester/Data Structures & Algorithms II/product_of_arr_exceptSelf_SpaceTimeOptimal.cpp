#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    //prefix => ans
    for (int i=1; i<n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    //suffix
    int suffix = 1;
    for(int i=n-2; i>=0; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}

int main() {
    cout << "Enter the size of the nums array n: ";
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
}