#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,pos;
    cout<<"number of elements:";
    cin>>n;
    int arr[n+1];
    cout<<"enter array elements:";
    for (int i=0;i<n;i++){
        cin>>arr[i];}
    cout<<"Element to be inserted:";
    cin>>a;
    for (int j=0;j<n;j++){
        if (arr[j]>a){
            pos=j;
            break;
        }
    }
    for (int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];}
    arr[pos]=a;

    cout<<"NEW SORTED ARRAY IS:";
    for (int i=0;i<=n;i++){
        cout<<arr[i]<<endl;}

}