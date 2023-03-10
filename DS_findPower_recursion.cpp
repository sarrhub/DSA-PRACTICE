#include<iostream>
using namespace std;

int countPower(int n1,int p1){
    if(p1==0){
        return 0;
    }
    if(p1==1){
        return n1;
    }

    //recursive call
    int ans =countPower(n1,p1/2);
     //if p1 is even
    if(p1%2==0){
        return ans*ans;
    }else{
        //if p1 is odd
        return n1*ans*ans;
    }
}

int main(){

    int num, power;
    cout<<"Enter number =";
    cin>>num;
    cout<<"Enter power= ";
    cin>>power;
    int ans = countPower(num,power);
    cout<<"Ans is "<<ans;
    return 0;
}