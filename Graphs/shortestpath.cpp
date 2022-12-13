#include<iostream>
#include<queue>
#include<climits>
#include<vector>
using namespace std;

void BFS(vector<int> adj[],int s,int v){

    int dist[v+1];
    dist[0] = 0;

    for (int i = 1; i < v; i++)
    {
        dist[i] = INT_MAX;
    }
    

    bool visited[v+1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        for(int V:adj[u]){
            if(visited[V] == false){
                dist[V] = dist[u]+1;
                visited[V] = true;
                q.push(V);
            }
        }

    }
    
    for (int i = 0; i < v; i++)
    {
        cout<<dist[i]<<" ";
    }
    
}

void addedje(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[5];
    addedje(adj,0,1);
    addedje(adj,0,2);
    addedje(adj,1,2);
    addedje(adj,1,3);
    addedje(adj,3,4);
    BFS(adj,0,5);
    return 0;
}