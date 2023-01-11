#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printL(Node *head){

    if(head == NULL) return;

    cout<<head->data<<" ";

    printL(head->next);

    // while (head != NULL)
    // {
    //     cout<<head->data<<" ";
    //     head = head->next;
    // }
    
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;

    printL(head);

    return 0;
}