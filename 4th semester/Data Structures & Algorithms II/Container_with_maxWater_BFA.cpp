#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxArea(vector<int>& height) {
     int maxWater = 0; // Ans
    
     for(int i=0; i<height.size(); i++) {
        for(int j=1; j<height.size(); j++) {
            int weidht = j - 1;
            int Height = min(height[i], height[j]);
            int currWater = weidht * Height;

            maxWater = max(maxWater, currWater);
        }
     }

     return maxWater;
}

int main() {
    cout << "Enter the number of containers: ";
    int n;
    cin >> n;
    vector<int> height(n);
    cout << "Enter the heights of the containers: ";
    for(int i = 0; i < n; ++i) {
        cin >> height[i];
    }
    cout << "Maximum water that can be contained: " << maxArea(height) << endl;
}