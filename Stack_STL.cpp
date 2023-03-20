#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(2);
    st.push(4);

    cout<<"printing the top element= "<<st.top()<<endl;;
    st.pop();
    cout<<"printing the top element= "<<st.top()<<endl;

    cout<<"is empty = "<<st.empty()<<endl;
    cout<<"the size of stack = "<<st.size()<<endl;

    return 0;
}