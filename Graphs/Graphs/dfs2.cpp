#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void DFS(int node,vector<int> adj[],vector<int> &visited,vector<int> &dfs){
    visited[node] = 1;
    dfs.push_back(node);
    for(auto it : adj[node]){
        if(!visited[it]){
            DFS(it,adj,visited,dfs);
        }
    }
}

void Dfs(vector<int> adj[],int v){
    vector<int> visited(v,0);
    int start = 0;
    vector<int> dfs;
    DFS(start,adj,visited,dfs);

    for(auto x:dfs){
        cout<<x<<" ";
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
    addedje(adj,3,4);
    addedje(adj,4,5);
    addedje(adj,5,6);
    Dfs(adj,7);
    return 0;
}