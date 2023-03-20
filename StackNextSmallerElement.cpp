#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>  nextSmallerElement (vector<int> &v , int N){
    stack<int> st;
    st.push(-1);
    vector<int> ans(N);
    //  for(int i = 0;i< N ; i++){
    for(int i = N-1;i>= 0 ; i--){
        int curr = v[i];
        while(st.top() >= curr){
            st.pop();
        }
        //ans is stack ka top
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    for(int a :v){
        cout<<a<<" ";
    }
    cout<<endl;
   vector<int> ans = nextSmallerElement(v,v.size());
   for(int a :ans){
        cout<<a<<" ";
    }
        return 0;
}