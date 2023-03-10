#include<iostream>
using namespace std;

void sortArray(int *arr,int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    int arr[]={5,1,4,2,8};
    int n=5;
    cout<<"before sorting.."<<endl;
    printArray(arr,n);

    sortArray(arr,n);
    cout<<"after sorting.."<<endl;
    printArray(arr,n);



    return 0;
}