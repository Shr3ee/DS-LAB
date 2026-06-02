#include <bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[], int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void bfs(vector<int> adj[],int n,int source){
    vector<bool> visited(n, false);
    queue<int> q;
    visited[source]=true;
    q.push(source);
    while(!q.empty()){
        int p=q.front();
        q.pop();
        cout<<p<<" ";
        for(int neighbor:adj[p]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
}
int main(){
    int a,b,n,m;
    cout<<"enter number of vertices and edges:"<<endl;
    cin>>n>>m;
    vector<int> adjM[n];
    for(int i=0;i<m;i++){
        cout<<"enter edge"<<i+1<<endl;
        cin>>a>>b;
        addedge(adjM,a,b);
    }
    int source;
    cout << "Enter source:";
    cin >> source;

    cout << "BFS traversal:";
    bfs(adjM, n, source);
}

