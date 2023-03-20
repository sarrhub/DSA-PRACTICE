#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string s){
    stack<char>c;
    for(int i=0;i<s.length();i++){
         char ch = s[i];
         //if opening bracket , stack push
         if(ch == '(' || ch == '[' || ch == '{'){
            c.push(ch);
         }else{
            //for closing bracket
            if(!c.empty()){
                if((ch=='}' && c.top()=='{') || (ch==']' && c.top() == '[') || (ch == ')' && c.top() == '(')){
                    c.pop();
                }else{
                    return false;
                }

            }else{
                return false;
            }
         }

    }
    return true;
    // if(s.empty()){
    //     return true;
    // }else{
    //     return false;
    // }
}
int main(){
    string s = "{([()])}";
    if(isValidParenthesis(s)){
        cout<<"Valid parenthesis"<<endl;
    }else{
        cout<<"Invalid parenthesis"<<endl;
    }
    return 0;
}