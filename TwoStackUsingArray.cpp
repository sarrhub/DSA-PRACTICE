#include<iostream>
using namespace std;

class TwoStack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int s){
        this->size = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }
    // push in stack 1
    void push1(int element){
        if(top2 - top1 >1){
            top1++;
            arr[top1] = element;
        }else{
            cout<<"stack1 is overflow"<<endl;
        }
    }

    // push in stack 2
    void push2(int element){
        if(top2 - top1 >1){
            top2--;
            arr[top2] = element;
        }else{
            cout<<"stack2 is overflow"<<endl;
        }
    }

    //pop in stack1
    void pop1(){
        if(top1>=0){
            int ans = arr[top1];
            cout<<"ans top1 ="<<ans<<endl;
            top1--;
        }else{
            cout<<"stack1 is underflow"<<endl;
        }
    }
    //pop in stack2
    void pop2(){
        if(top2<size){
            int ans = arr[top2];
            cout<<"ans top1 ="<<ans<<endl;
            top2++;
        }else{
            cout<<"stack2 is underflow"<<endl;
        }
    }

};

int main(){
    TwoStack st(4);
    // st.push1(3);
    // st.push1(4);
    // st.push2(6);
    // st.push2(7);
    // st.push1(3);
    // st.push1(9);
    // st.pop1();
    // st.pop2();
    return 0;
}