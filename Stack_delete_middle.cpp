#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int>&st,int size,int count){
    
    //base case 
    if(count == size/2){
        int num = st.top();
        cout<<"deteted element is:- "<<num<<endl;
        st.pop();
        return ;
    }
    int num = st.top();
    // cout<<"in between :- "<<num<<endl;//for my understanding not usefull in this code
    st.pop();

    //recursive call
    // cout<<"recursive call "<<count<<endl;  //for my understanding not usefull in this code
    deleteMiddle(st,size,count+1);
    // cout<<"num after"<<num<<endl;   //for my understanding not usefull in this code
    
    st.push(num);

}
int main()
{
    stack<int> st;
    st.push(5);
    st.push(9);
    st.push(12);
    st.push(8);
    st.push(4);

    int size = st.size();
    deleteMiddle(st,size,0);
    return 0;
}