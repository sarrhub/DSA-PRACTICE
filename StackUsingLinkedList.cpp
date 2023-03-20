#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
class stack{
    public:
    Node* head = NULL;

    void push(int data){
        Node *temp = new Node(data);
        

    }
};

int main(){
    return 0;
}