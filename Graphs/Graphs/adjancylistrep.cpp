#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> adj[],int v){
    for (int i = 0; i < v; i++)
    {
        for(int x: adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}

void addedje(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[4];
    addedje(adj,0,1);
    addedje(adj,0,2);
    addedje(adj,1,2);
    addedje(adj,1,3);
    print(adj,4);
    return 0;
}