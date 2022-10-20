#include<iostream>
using namespace std;

struct queue
{
    int *arr;
    int front,size,cap;
    queue(int c){
        arr = new int[c];
        cap = c;
        size = 0;
        front = 0;
    }
    bool isfull(){
        return size == cap;
    }
    bool isempty(){
        return size == 0;
    }
    int getfront(){
        if(isempty()){
            return -1;
        }else{
            return front;
        }
    }
    int getRear(){
        if(isempty()){
            return -1;
        }else{
            return (front+size-1)%cap;
        }
    }
    void enqueue(int x){
        if(isfull()){
            return;
        }
        int rear = getRear();
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }
    void dequeue(){
        if(isempty()){
            return;
        }
        front = (front+1)%cap;
        size--;
    }
    int Size(){
        return size;
    }
    
};


int main(){
    queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(40);
    cout<<q.getfront()<<endl;
    cout<<q.getRear()<<endl;
    cout<<q.Size();
    q.dequeue();
    cout<<q.Size();
    
}