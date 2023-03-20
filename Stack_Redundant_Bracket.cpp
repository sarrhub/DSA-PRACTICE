#include<iostream>
#include<stack>
using namespace std;

bool isRedundantBrackets(string &str){
    stack<char> st;
    for(int i= 0; i<str.length();i++){
        char ch = str[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }else{
            // ch yaa to ')' hai or lowercase letter
            if(ch == ')'){
                bool isRedundant = true;

                while(st.top() != '('){
                    char top  = st.top();
                    if(top == '*' || top == '-' || top == '+' || top == '/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true){
                    return true;
                }
                    st.pop();
            }
        }
    
    }
    return false;
}

int main(){
    string str = "((a+b))";
    if(isRedundantBrackets(str)){
        cout<<"this expression is redundent"<<endl;
    }else{
        cout<<"this expression is not redundent"<<endl;
    }
    return 0;

}