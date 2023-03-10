#include<iostream>
using namespace std;
int firstOccurance(int arr[],int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    int ans=-1;

    while(start <=end){
        if(arr[mid]==key){
           ans = mid;
           end = mid-1;
        }
        if(key>arr[mid]){
            start= mid+1;
        }else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }

   
    return ans;
}
int lastOccurance(int arr[],int n , int key){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    int ans=-1;

    while(start <=end){
        if(arr[mid]==key){
           ans = mid;
           start = mid+1;
        }
        if(key>arr[mid]){
            start= mid+1;
        }else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start +(end-start)/2;
    }
  
    return ans;
}

int findTotalNoOfOccurannces(int n1,int n2){
    return (n2-n1)+1;
}

int main (){
    int arr[]={2,3,4,5,5,5,5,5,6,7};
     int firstocc =firstOccurance(arr,9,5);
     int lastocc =lastOccurance(arr,9,5);
    cout<<"firstOccurance at index "<<firstocc<<endl;
    cout<<"lastOccurance at index "<<lastocc<<endl;
    cout<<"Total number of occurances "<<findTotalNoOfOccurannces(firstocc,lastocc)<<endl;
    
    return 0;
}