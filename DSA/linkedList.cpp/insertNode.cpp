#include<iostream>
using namespace std;

//------FOR CREATE NODE---------
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

//----------FOR PRINT NODE---------------
void print(Node *head){
    Node *temp = head;
while (temp != NULL)
{
    cout<<head->data<<" ";
    head = head->next;
}

}

//-------------CALCULATE LENGTH------------
void length(Node *head){
    Node*temp = head;
    int n = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        n++;
    }
    cout<<"length is "<<n;
}

//----------INSET AT ANY POSITION-------------
Node *insertNode(Node *head,int i,int data){
    Node *newNode = new Node(data);
    Node *temp = head;
    int count = 0;
    if(i == 0){
        newNode->next = head;
        head = newNode;
        return head;
    }
    while (temp != NULL && count < i-1)
    {
        temp = temp->next;
        count++;
    }
    
    if(temp != NULL){
    newNode->next = temp->next;
    temp->next = newNode;
    }
    
}
//------------TAKE NODE AS A INPUT BY USER----------
// Node * takeinput(){
//     int data;
//     cin>>data;
//     Node *head = NULL;
//     Node *tail = NULL;
//     while (data != -1)
//     {
//         Node *newNode = new Node(data);
//         if(head == NULL){
//             head = newNode;
//             tail = newNode;
//         }else{ 
//             tail->next = newNode;
//             tail = tail->next;
//         }
//         cin>>data;
//     }
//     return head;
// }
int main(){

    // Node *head = takeinput();
    // print(head);
    // length(head);
//--------STATICALY CREATED----------
Node n1(10);
Node *head = &n1;
Node n2(20);
Node n3(30);
Node n4(40);
Node n5(50);
n1.next = &n2;
n2.next = &n3;
n3.next = &n4;
n4.next = &n5;
print(head);
length(head);
/*
--------------DYNIMICALLY CREATED-------
Node n1(10);
Node *head = &n1;
Node n2(20);
n1.next = &n2;
cout<<head->next->data<<" ";
//Dynamically----
Node *n1 = new Node(10);
Node *head = n1;
Node *n2 = new Node(20);
Node *n3 = new Node(20);
Node *n4 = new Node(20);
Node *n5 = new Node(20);
n1->next = n2;
n2->next = n3;
n3->next = n4;
n4->next = n5;
print(head);*/
}