#include <bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[], int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
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
    cout<<"adjacency list is:"<<endl;
    for(int i = 1; i <= n; i++){
        cout << i << " -> ";
        for(int v : adjM[i]){
            cout << v << " ";
        }
        cout << endl;
    }
}
