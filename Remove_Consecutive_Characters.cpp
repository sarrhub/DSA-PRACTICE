#include<iostream>
#include<stack>
using namespace std;

void reverseString(string &str){
    int i= 0;
    int j= str.length()-1;
    while(i<= j){
        char temp = str[i];
        str[i] =str[j];
        str[j]= temp;
        i++;
        j--;
    }
}
 string removeConsecutiveCharacter(string S)
    {
        // stack<char> st;
        // for(int i=0;i<S.length();i++){

        //     char ch = S[i];
        //     if(st.empty() || ch != st.top() ){
        //         st.push(ch);
        //     }
        // }
    
        // string str = "";
        // while(!st.empty()){
        //     str.push_back(st.top());
        //     st.pop();
        // }
        // reverseString(str);
        // return str;




         int i=0,j=1;
        while(S[j]!='\0'){
            if(S[i]!=S[j]){
             S[++i] = S[j];
            }
            j++;
        }
        return S.substr(0,i+1);
        
        
        
    }

int main(){
    string str = "aabbbccc";
     string r = removeConsecutiveCharacter(str);
     cout<<r<<endl;
    return 0;
}