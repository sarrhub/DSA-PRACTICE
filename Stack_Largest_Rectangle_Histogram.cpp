#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr , int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0;i--){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
} 

vector<int> prevSmallerElement(vector<int> arr , int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0; i<n;i++){
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
} 


int largestRectangleArea(vector<int> &height){
    int n = height.size();
    vector<int> next(n);
    next = nextSmallerElement(height, n);

    vector<int> prev(n);
    prev = prevSmallerElement(height, n);

    int area = INT_MIN;
    for(int i=0;i<n;i++){
        int l = height[i];
        
        if(next[i] == -1){
            next[i] = n;
        }
        int b = next[i] - prev[i] -1;
        int newArea = l*b;
        area = max(area, newArea);
    }
    return area;

}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    for(int a :v){
        cout<<a<<" ";
    }
    cout<<endl;
   int ans = largestRectangleArea(v);
   cout<<ans<<endl;
        return 0;
}