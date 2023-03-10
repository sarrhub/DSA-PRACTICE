#include<iostream>
using namespace std;

void sortArray(int *arr, int idx,int size){

    //base case
        if(idx == size)
            return;

        int curr = arr[idx];
        int j = idx - 1;

        while(j >= 0){
            if(curr < arr[j]){ // found greater value than curr shift to right
                arr[j + 1] = arr[j--];
            }
            else // Smaller element found
                break;
        }
        arr[j + 1] = curr; //place curr element at correct place

        // one part Done recursion will do other work;
        sortArray(arr , idx + 1 , size);
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

    sortArray(arr,1,n);
    cout<<"after sorting.."<<endl;
    printArray(arr,n);



    return 0;
}