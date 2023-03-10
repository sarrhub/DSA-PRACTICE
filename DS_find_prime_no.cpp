#include<iostream>
#include<vector>
using namespace std;

                                  //by Sieve of eratosthenes

int totalPrime(int n){
    int count=0;
    vector<bool> prime(n+1,true);
    prime[1]=prime[2]=false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
           for(int j=2*i;j<n;j=j+i){
            prime[j]=false;
           } 
        }
    }
    return count;
}                                  
int main(){
    int n;
    cout<<"Enter any no. to find count of prime number ";
    cin>>n;
    cout<<"Total prime number in range of n is " <<totalPrime(n)<<endl;

    return 0;
}