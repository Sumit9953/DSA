#include<iostream>
#include<vector>
using namespace std;

bool DFSrec(vector<int> adj[],int s,bool visited[],bool rest[]){

    visited[s] = true;
    rest[s] = true;
    for(int u: adj[s]){
        if(visited[u] == false && DFSrec(adj,u,visited,rest) ){
                return true;
            
        }else if(rest[u] == true){
            return true;
        }
    }
    rest[s] = false;
    return false;
}

bool DFS(vector<int> adj[],int v){
    bool visited[v];
    bool rest[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        rest[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if(visited[i] == false){
          if(DFSrec(adj,i,visited,rest) == true){
            return true;
          }
        }
    }
    return false;
}


void addedje(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[7];
    addedje(adj,0,1);
    addedje(adj,1,2);
    addedje(adj,1,3);
    addedje(adj,3,2);
    addedje(adj,2,4);
    addedje(adj,4,5);
    cout<<DFS(adj,7)<<endl;
    return 0;
}