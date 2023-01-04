#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(vector<int> adj[],int v){
    vector<int> visted(v,0);
    vector<int> bfs;
    visted[0] = 1;
    queue<int> q;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
            if(!visted[it]){
                visted[it] = 1;
                q.push(it);
            }
        }

    }
    for(auto x:bfs){
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
    
    BFS(adj,7);
    return 0;
}
