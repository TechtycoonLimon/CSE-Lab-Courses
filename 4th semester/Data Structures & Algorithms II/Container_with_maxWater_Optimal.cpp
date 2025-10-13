#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxArea(vector<int>& height) {
     int maxWater = 0; // Ans
int lp=0, rp = height.size()-1;

while(lp < rp) {
    int weidht = rp - lp;
    int Height = min(height[lp], height[rp]);
    int currWater = weidht * Height;
    maxWater = max(maxWater, currWater);

    height[lp] < height[rp] ? lp++ : rp--;
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