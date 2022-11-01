#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *left,*right;
    Node(int val){
        key = val;
        left=right=NULL;
    }
};

Node *insert(Node *root,int x){
     if(root == NULL) return new Node(x);
     else if(root->key < x){
        root->right = insert(root->right,x);
     }
     else if(root->key > x){
        root->left = insert(root->left,x);
     }
     return root;
}


int main(){
   Node *root = new Node(10);
   root->left = new Node(5);
   root->right = new Node(15);
   root->right->left = new Node(12);
   root->right->right = new Node(18);
   insert(root,70);
}