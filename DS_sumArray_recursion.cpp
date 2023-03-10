#include<iostream>
using namespace std;

int sumArray(int *arr , int size){
    
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart= sumArray(arr+1,size-1);
    int sum = arr[0]+remainingPart;
    return sum;
    
}

int main(){
    int n;
    cout<<"Enter size of array =";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter array element=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum of array is ="<<sumArray(arr,n); 
    return 0;
}