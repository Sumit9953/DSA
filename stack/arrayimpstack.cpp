#include<iostream>
using namespace std;

struct mystack{
    int *arr;
    int cap;
    int top;
    mystack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x){
        if(top == cap-1){
        cout<<"stack is overflow ";
        }else{
        top++;
        arr[top] = x;
        }
    }
    int pop(){
        if(top == -1){
            cout<<" stack is underflow ";
        }else{
        int res = arr[top];
        top--;
        return res;
        }
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isempty(){
        return (top == -1);
    }
};

int main(){
    mystack s(5);
    // cout<<s.pop()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(30);
    s.push(30);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
    
}