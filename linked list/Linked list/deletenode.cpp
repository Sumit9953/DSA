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

void print(Node *head){
    Node *curr = head;
    while (curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

Node *Delete(Node *head){
    if(head == NULL){
        return NULL;
    }else{
        Node *temp = head->next;
        delete(head);
        return temp;
    }
}

Node *lastnode(Node *head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete(head);
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
}

int main(){
    Node *head  = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    head->next  = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    print(head);
    head = Delete(head);
    print(head);
    head = lastnode(head);
    print(head);
}