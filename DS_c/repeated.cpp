#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n-1;i++){
        if (arr[i+1]==arr[i]) {
            cout<<"repeated element:"<<arr[i]<<" Position:"<<i+1;
            break;}
    }
    for (int j=0;j<=n;j++){
        if (j==i){
            for (int k=j;k<=n;j++){
                arr[k]=arr[k+1];
            }
        }
    }
}