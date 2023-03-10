#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter row =";
    cin>>row;
    int** arr = new  int*[row];
    // for(int i=0;i<row;i++){
    //     cout<<"Enter colunm ";
    //     cin>>col;
    //     arr[i]= new int [col];
    // }


    for(int i=0;i<row;i++){
          cout<<"Enter colunm ";
        cin>>col;
        arr[i]= new int [col];
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing memory
    for(int i=0;i<row;i++){
        delete []arr;
    }
    delete [] arr;
    return 0;
}