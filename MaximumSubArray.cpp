#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int maxSubArray(vector<int>nums){
    int n = nums.size();
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i,curSum = 0; j < n ; j++) {
                curSum += nums[j],
                ans = max(ans, curSum); 
        }
    }
        return ans;
}
int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxSubArray(arr);
    cout<<"The maximum sum Array = "<<ans<<endl;

    return 0;
}