#include<iostream>
using namespace std;


bool isSorted(int *arr, int size){
      if(size==0||size==1){
        return true;
      }
       if(arr[0]>arr[1]){
        return false;
       }else{
        int remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
       }
}

int main(){

    int arr[]={3,4,10,9,9};
    int size =sizeof(arr)/sizeof(arr[0]);

    int ans= isSorted(arr,size);
    if(ans){
       cout<<"Array is sorted....";
    }else{
        cout<<"Array is not sorted....";
    }
    return 0;
}