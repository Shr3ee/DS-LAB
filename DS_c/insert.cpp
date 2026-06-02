#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,y,pos,del;
    cin>>n;
    int a[n+1];
    cout<<"enter values:";
    for (int i=0;i<n;i++){
        cin>>a[i];}
    cout<<"current array"<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<endl;}
    cout<<"Enter element and it's position"<<endl;
    cin>>y>>pos;
    for (int i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];}
    a[pos-1]=y;
    cout<<"New Array"<<endl;
    for (int i=0;i<=n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Enter position of element to be deleted "<<endl;
    cin>>del;
    for (int i=0;i<=n;i++){
        if (i==del){
            for (int j=i;j<=n;j++){
                a[j]=a[j+1];
            }
        }
    }
    cout<<"\n";
    cout<<"New Array"<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}
