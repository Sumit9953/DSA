#include<iostream>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int key;
    Node(int v){
        key = v;
        left = right = NULL;
    }
};

int preIndex = 0;

Node *cTree(int in[],int pre[],int is,int ie){
    if(is > ie) return NULL;
    Node *root = new Node(pre[preIndex++]);
    
    int index;
    for (int i = is; i <= ie; i++)
    {
        if(in[i] == root->key){
            index = i;
            break;
        }
    }

    root->left = cTree(in,pre,is,index-1);
    root->right = cTree(in,pre,index+1,ie);
    return root;
    
}
void preorder(Node *root){
    if(root != NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
int pre[] = {10,20,30,40,50};
int in[] = {20,10,40,30,50};
Node *root;
root = cTree(in,pre,0,4);
preorder(root);

}