#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void BFS(vector<int> adj[],int s,bool visited[]){
    // bool visited[v+1];
    // for (int i = 0; i < v; i++)
    // {
    //     visited[i] = false;
    // }
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";

        for(int v:adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }

    }
    
    
}

void BFSdis(vector<int> adj[],int v){
    bool visited[v+1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if(visited[i] == false){
            BFS(adj,i,visited);
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
    BFSdis(adj,7);
    return 0;
}