#include<iostream>
using namespace std;


bool findKey(int *arr, int size, int key){
      if(size==0){
        return false;
      }
       if(arr[0]==key){
        return true;
       }else{
        bool remainingPart = findKey(arr+1,size-1,key);
        return remainingPart;
       }
}

int main(){

    int arr[]={3,4,10,9,11};
    int size =sizeof(arr)/sizeof(arr[0]);
    int key =9;
    int ans= findKey(arr,size,key);
    if(ans){
       cout<<"Present....";
    }else{
        cout<<"Absent....";
    }
    return 0;
}