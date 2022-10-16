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

Node *Nthnode(Node *head,int n){
    int count = 0;
    Node *curr = head;
    while(curr != NULL){
        curr = curr->next;
        count++;
    }
    if(count < n){
        return NULL;
    }
    Node *temp = head;
    int i = 1;
    while (i < count-n)
    {
        temp = temp->next;
        i++;
    }
    
    Node *temp1 = temp->next;
    temp->next = temp->next->next;
    delete(temp1);
    return head;
}

Node *NthNode(Node *head,int n){
    if(head == NULL){
        return NULL;
    }
    Node *first = head;
    for(int i =0;i<n;i++){
        if(first == NULL){
            return NULL;
        }
        first = first->next;
    }
    Node *seconde = head;
    while (first->next != NULL)
    {
        seconde = seconde->next;
        first = first->next;
    }
    Node *temp = seconde->next;
    seconde->next = seconde->next->next;
    delete(temp);
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
    head = NthNode(head,2);
    print(head);
}