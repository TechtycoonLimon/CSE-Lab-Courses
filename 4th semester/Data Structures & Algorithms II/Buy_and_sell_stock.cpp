#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0, bestBuy = prices[0];

    for(int i=1; i<prices.size(); i++) {
        if(prices[i] > bestBuy) {
            maxProfit = max(maxProfit, prices[i]-bestBuy);

        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main()
{
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter the stock prices: ";
    for(int i=0; i<n; i++) {
        cin>>prices[i];
    }

    cout<<"The maximum profit is: "<<maxProfit(prices)<<endl;
    return 0;
}

