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

Node *insertAt(Node *head,int pos,int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if(pos == 1){
        temp->next = head;
        return temp;
    }
    while (temp != NULL && count< pos-2)
    {
        temp = temp->next;
        count++;
    }
    if(temp == NULL){
        return head;
    }
    if(temp != NULL){
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
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
    head = insertAt(head,6,90);
    print(head);
}