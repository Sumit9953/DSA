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
}

void reprint(Node *head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    reprint(head->next);
}

Node *reverse(Node *head){
    Node *curr = head;
    Node *prve = NULL;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prve;
        prve = curr;
        curr = temp;
    }
    return prve;
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    reprint(head);
    cout<<endl;
    head = reverse(head);
    reprint(head);
}