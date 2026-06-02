#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    int n,key,value;
    cin>>n;
    while (n--){
        cin>>key>>value;
        m.insert({key,value});
    }
    for(auto x:m){
        cout<<x.first<<":"<<x.second<<endl;
    }
}