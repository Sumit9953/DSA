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

Node *getSucsser(Node *curr){
    curr = curr->right;
    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

Node* Delete(Node *root,int x){
    if(root == NULL) return root;
     else if(root->key < x){
        root->right = Delete(root->right,x);
     }
     else if(root->key > x){
        root->left = Delete(root->left,x);
     }else{
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }else{
            Node *succ = getSucsser(root);
            root->key = succ->key;
            root->right = Delete(root->right,succ->key);
        }
     }
     return root;
}


int main(){
   Node *root = new Node(10);
   root->left = new Node(5);
   root->right = new Node(15);
   root->right->left = new Node(12);
   root->right->right = new Node(18);
   Delete(root, 15);
}