#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a=0,b=0,c=0;
    cin>>n;
    int ar1[n],ar2[n],ar3[2*n];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }
    for(int i=0;i<n;i++){
        ar3[i]=ar1[i];
    }
    for(int i=n;i<2*n;i++){
        ar3[i]=ar2[i-n];
    }
    sort(ar3,ar3 + 2*n);
    // for(int i=0;i<2*n;i++){
    //     cout<<ar3[i]<<" ";
    // }
    cout<<ar3[n-1]+ar3[n]<<endl;
}
