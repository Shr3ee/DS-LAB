#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l=0,r=0,k=0;
    cout<<"Enter length of array 1 and 2:";
    cin>>n>>m;
    int a[n], b[m], c[n+m];
    cout<<"Enter elements of 1:";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter elements of 2:";
    for (int i=0;i<m;i++){
        cin>>b[i];
    }
    while (l<n && r<m){
        if (a[l]<=b[r]) c[k++]=a[l++];
        else c[k++]=b[r++];
        }
    while(l<n){
        c[k++]=a[l++];
        }
    while(r<m){
        c[k++]=b[r++];
        }
    cout<<"NEW ARRAY:"<<endl;
    for (int k=0;k<n+m;k++) cout<<c[k]<<endl;
}
    

