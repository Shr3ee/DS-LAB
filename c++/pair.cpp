#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int marks,n;
    vector <pair<string,int>> records;
    cout<<"Enter number of records"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>marks;
        records.push_back({name,marks});
    }
    cout<<"Record is:"<<endl;
    for(auto x:records){
        cout<<x.first<<":"<<x.second<<endl;
    }
}