#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void printithNode(Node *head,int d){
    Node *temp = head;
    int count = 0;
    while (count < d && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout<<temp->data<<endl;
}

/*Node *Insertatithposition(Node *head,int i,int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
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
}*/

Node *insertrecursively(Node *head,int i,int data){
    if(head == NULL){
        return head;
    }
   
    Node *a = insertrecursively(head->next,i-1,data);
    head->next = a;
}

 void deleteNode(Node *head,int i){
    Node *temp = head;
    int count = 0;
    while(count < i-1){
        temp = temp->next;
        count++;
    }
    Node *a = temp->next;
    Node *b = a->next;
    temp->next = b;
    delete a;
 }

Node *takeInput(){
int data;
cin>>data;
Node *head = NULL;
Node *tail = NULL;
while (data != -1)
{
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = tail->next;
    }
    cin>>data;
}
return head;
}
void print(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

int main(){
    // Node n1(10);
    // Node *head = &n1;
    // Node n2(20);
    // Node n3(30);
    // Node n4(40);
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    Node *head = takeInput();
    // printithNode(head,2);
    // Node *head1 = Insertatithposition(head,0,90);
    // print(head1);
    // deleteNode(head1,2);
    Node *head1 = insertrecursively(head,2,80);
    print(head1);
}