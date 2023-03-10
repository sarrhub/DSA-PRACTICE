#include<iostream>
#include<vector>
using namespace std;

bool findTarget(vector<vector<int>> v,int k){
    int row=v.size();
    int col=v[0].size();
    int start=0;
    int end=row*col-1;

    int mid=start+(end-start)/2;


    while(start<=end){
        int mid_element=v[mid/col][mid%col];
        if(mid_element==k){

            return 1;
        }
        if(mid_element<k){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}
int main(){
     vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    if(findTarget(vect,5)){
        cout<<"element is present..";
    }else{
        cout<<"element is absent..";
    }    

    return 0;
}