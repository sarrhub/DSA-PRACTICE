#include<iostream>
#include<vector>
using namespace std;
                               // MOUNTAIN BINARY SEARCH  



                               
 int findPeakElementInArray(int arr[],int size){
    int start=0;
    int end = size-1;
    int mid = start +(end - start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }else{
            end=mid;
        }
        mid=start +(end - start)/2;
    }
    return start ;
 }

int main(){
    // vector<int> v={1,4,3,2};
    int v[]={1,3,4,3,2,1};
    // int element ,size;
    // cout<<"Enter the size of array (size>=3) ";
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"Enter element in array ";
    //     cin>>element;
    //     v.push_back(element);
    // }
    cout<<"The pivot element is at index "<<findPeakElementInArray(v,9);

    return 0;
}