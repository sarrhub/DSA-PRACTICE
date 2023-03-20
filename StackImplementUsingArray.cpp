#include<iostream>
using namespace std;

class stack{
    //properties of satck
    public:
    int top ;
    int *arr;
    int size;

    //behaviour
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top >1){
            top++;
            arr[top] = element;
        }else{
            cout<<"stack is overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack is underflow"<<endl;
        }
    }
     //peek is also called top
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack is empty"<<endl;
        }
    }

    int empty(){
        if(top == -1){
            return true;      
        }else{
            return false;
        }
    }

};

int main(){
    stack st(5);
    st.push(3);
    st.push(6);
    st.push(7);

    cout<<"top = "<<st.peek()<<endl;
    st.pop();
    cout<<"top = "<<st.peek()<<endl;
     st.pop();
    cout<<"top = "<<st.peek()<<endl;
    //  st.pop();
    // cout<<"top = "<<st.peek()<<endl;

    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

    return 0;
}