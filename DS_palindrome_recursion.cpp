#include<iostream>
using namespace std;
bool checkPolindrome(string str ,int i, int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }else{
        return checkPolindrome(str,i+1,j-1);
    }
}

int main(){

    string name  = "naman";
    bool ans = checkPolindrome(name ,0,name.length()-1);
    if(ans){
        cout<<"its polindrome...";
    }else{
        cout<<"its not polindrome...";
    }
    return 0;
}