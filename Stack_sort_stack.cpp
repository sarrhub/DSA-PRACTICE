#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &st, int element)
{
    if (st.empty() || (!st.empty() && st.top() < element)){
        st.push(element);
        return;
    }

    int num = st.top();
    st.pop();

    sortedInsert(st, element);
    st.push(num);
}

void sortStack(stack<int>&st){
    if(st.empty()){
        return ;
    }

    int num = st.top();
    st.pop();

    sortStack(st);
    sortedInsert(st, num);
    
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
    sortStack(st);
    cout << st.top() << endl;
    return 0;
}