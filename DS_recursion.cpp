#include<iostream>
using namespace std;

int count(int n){
     
     //base case
     if(n==0){
        return 1;
     }
      // Head call
    //   cout<< n <<" ";

     //Recursive condition 
     count(n-1);

      // Tell call
      cout<< n <<" ";

     }

int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;

    count(n);
    return 0;
}