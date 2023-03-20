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

int main()
{
    stack<int> st;
    st.push(7);
    st.push(1);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << st.size() << endl;
    insertAtBottam(st, 4);
    cout << st.size() << endl;
    return 0;
}