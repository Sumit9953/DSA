#include<iostream>
using namespace std;

//--------SIMPLE---------
/*struct dequeue
{
    int *arr;
    int cap,size;
    dequeue(int c){
        cap = c;
        size = 0;
        arr = new int[c];
    }
    bool isfull(){
        return size == cap;
    }
    bool isempty(){
        return size == 0;
    }
    void insertRear(int x){
        if(isfull()) return;
        arr[size] = x;
        size++;
    }
    void deleteRear(){
        if(isempty()) return;
        size--;
    }
    int getrear(){
        if(isempty()) return -1;
        else return (size-1);
    }
    void insertFront(int x){
        if(isfull()) return;
        for (int i = size-1; i >= 0; i--)
        {
            arr[i+1] = arr[i];
            arr[0] = x;
            size++;
        } 
    }
    void deletefront(){
        if(isempty()) return;
        for (int i = 0; i < size-1; i++)
        {
            arr[i] = arr[i+1];
            size--;
        }    
    }
    int getfront(){
        if(isempty()) return -1;
        else return 0;
    }
};*/
struct dequeue
{
    int *arr;
    int cap,front,size;
    dequeue(int c){
        cap = c;
        size = 0;
        front = 0;
        arr = new int[c];
    }
    bool isfull(){
        return size == cap;
    }
    bool isempty(){
        return size == 0;
    }
    void insertRear(int x){
        if(isfull()) return;
        int new_rear = (front+size)%cap;
        arr[new_rear] = x;
        size++;
    }
    void deleteRear(){
        if(isempty()) return;
        size--;
    }
    int getrear(){
        if(isempty()) return -1;
        else return (front+size-1)%cap;
    }
    void insertFront(int x){
        if(isfull()) return;
        front = (front+cap-1)%cap;
        arr[front] = x;
        size++;
    }
    void deletefront(){
        if(isempty()) return;
        front = (front+1)%cap;
        size--;   
    }
    int getfront(){
        if(isempty()) return -1;
        else return front;
    }
};
