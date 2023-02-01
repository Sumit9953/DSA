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

Node *Insert(Node *head,int x){
    Node *curr = head;
    Node *temp = new Node(x);
    temp->next = curr;

    return temp;
}

Node *InsertEnd(Node *head,int x){
    Node *curr = head;
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }

    while(curr->next != NULL){
        curr = curr->next;
    }

    curr->next = temp;

    return head;
}

Node *InsetAny(Node *head,int pos,int x){
    Node *curr = head;
    Node *newNode = new Node(x);

    if(pos == 1){
        newNode->next = curr->next;
        return newNode;
    }

    int st = 1;

    while(curr != NULL and st <= pos-2){
        st++;
        curr = curr->next;
    }

    if(curr == NULL) return head;
    newNode->next = curr->next;
    curr->next = newNode;

    return head;

}

Node *Deletefirst(Node *head){
    Node *temp = head->next;

    delete(head);
    return temp;
}

Node *DeleteLast(Node *head){

    Node *curr = head;

    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    Node *temp = curr->next;
    delete(temp);
    curr->next = NULL;

    return head;
    
}

int Search(Node *head,int x){
    if(head == NULL){
        return -1;
    }

    if(head->data == x) return 1;

    int res = Search(head->next,x);
    if(res == -1) return -1;
    else return res+1;

    // if(head == NULL) return -1;

    // int i = 1;
    // while(head != NULL){
    //     if(head->data == x){
    //         return i;
    //     }else{
    //     i++;
    //     head = head->next;
    //     }
    // }

    // return -1;
}

void printL(Node *head){

    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;

    Node *temp;

    temp = InsetAny(head,2,70);
    
    printL(temp);

    cout<<endl<<Search(temp,70);

    return 0;
}