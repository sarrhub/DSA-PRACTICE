#include <iostream>
#include <stack>
using namespace std;

void insertAtBottam(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }

    int num = st.top();
    st.pop();

    insertAtBottam(st, element);
    st.push(num);
}

void reverseStack(stack<int>&st){
    if(st.empty()){
        return ;
    }

    int num = st.top();
    st.pop();

    reverseStack(st);
    insertAtBottam(st, num);
    
}

int main()
{
    stack<int> st;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << st.top() << endl;
    reverseStack(st);
    cout << st.top() << endl;
    return 0;
}