#include<iostream>
using namespace std;

bool findKey(int arr[],int s,int e, int key){
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2 ;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return findKey(arr , s, mid-1,key);
    }else{
        return findKey(arr,mid+1,e,key);
    }
}

int main(){
    int arr[]={2,4,5,6,8,9,23};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 76;
    int ans = findKey(arr,0,size-1,key);
    if(ans){
       cout<<"Present....";
    }else{
        cout<<"Absent....";
    }
    return 0;
}