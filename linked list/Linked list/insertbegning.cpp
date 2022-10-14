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

Node *print(Node *head){
    Node *curr = head;
    while (curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

Node *insertatEnd(Node *head,int data){
    Node *temp = new Node(data);
    while (head == NULL)
    {
        return head;
    }
    
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
Node *insertAtbeg(Node *head,int data){
    Node *temp = new Node(data);
    temp->next = head;
    return temp;
}

int main(){
    Node *head = NULL;
    head = insertAtbeg(head,10);
    head = insertAtbeg(head,20);
    head = insertAtbeg(head,30);
    head = insertAtbeg(head,40);
    head = insertatEnd(head,50);
    print(head);  
}