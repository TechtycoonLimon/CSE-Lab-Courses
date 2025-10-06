#include<iostream>
#include<vector>
using namespace std;
// That's the most optimize algorithm for searching majority element.
int majorityElement(vector<int>& nums) {
    int freq = 0, ans = 0;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        if(freq == 0) {
            ans = nums[i];
        } 
        if(ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }

    int main() {
    vector<int> nums = {1,2,1,1,2,1};

    int ans = majorityElement(nums);
    cout << "The mojority element is: " << ans << endl;
    return 0;
}
