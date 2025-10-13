#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size(); 
    vector<int> ans(n, 1);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if( i != j) {
                ans[i] *= nums[j];
            }
        }
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