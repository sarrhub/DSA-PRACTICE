#include<iostream>
using namespace std;
void swap(int *xp,int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=false;
            }
           
        }
        if(swapped==false){
            break;
        }
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,5,3,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"before sorting...";
    display(arr,n);
    bubbleSort(arr,n);
    cout<<"after sorting...";
    display(arr,n);
    return 0;
}