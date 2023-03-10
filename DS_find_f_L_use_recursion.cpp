#include<iostream>
using namespace std;

int firstOccurance(int arr[],int s, int e, int key){
    if(s<e){
        return 0;
    }
     int ans=-1;
    int mid=s+(e-s)/2;
    if(arr[mid==key]){
        return mid;

    }
    if(arr[mid]>key){
        ans= firstOccurance(arr , s, mid-1,key);
    }else{
        ans= firstOccurance(arr,mid+1,e,key);
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,5,6,6,6,6,8,9};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key = 6;
    cout<<"First occurance on index "<<firstOccurance(arr,0,size-1,key);
    return 0;
}