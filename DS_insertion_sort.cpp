#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={12,11,13,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before sorting...."<<endl;
    display(arr,n);
     
    insertionSort(arr,n);
    cout<<endl;
    cout<<"after sorting...."<<endl;
    display(arr,n);

    return 0;
}