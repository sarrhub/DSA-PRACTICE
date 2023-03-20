#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxRate = INT_MAX;
        int profit = 0;
        int assumProfit = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < maxRate){
                maxRate = prices[i];
            }
            assumProfit = prices[i] -  maxRate;
            if(profit  < assumProfit){
                profit  = assumProfit;
            }
        }
        return profit;
    }
int main(){
    vector<int> arr = {7,1,5,3,6,4};
    int ans = maxProfit(arr);
    cout<<"The maximum profit at index = "<<ans<<endl;

    return 0;
}