#include<iostream>
#include<vector>
using namespace std;

void DFSrec(vector<int> adj[],int s,bool visited[]){

    visited[s] = true;
    cout<<s<<" ";
    for(int u: adj[s]){
        if(visited[u] == false){
            DFSrec(adj,u,visited);
        }
    }
}

void DFS(vector<int> adj[],int v){
    bool visited[v+1];

    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if(visited[i] == false){
        DFSrec(adj,i,visited);
        }
    }
    
}


void addedje(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[7];
    addedje(adj,0,1);
    addedje(adj,0,2);
    addedje(adj,1,2);
    addedje(adj,1,3);
    addedje(adj,4,5);
    addedje(adj,5,6);
    addedje(adj,4,6);
    DFS(adj,7);
    return 0;
}