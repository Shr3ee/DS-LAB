#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter Length: ";
    int n1,n2,i=0,j=0,k=0;
    cin>>n1>>n2;
    vector<int> a(n1), b(n2);
    vector<int> c(n1+n2);
    cout<<"enter 1st set:"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"enter 2nd set:"<<endl;
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    while (i<n1 && j<n2){
        if (a[i]<b[j]) c[k++]=a[i++];
        else if (a[i]==b[j]) {
            c[k++]=a[i++];
            j++;}
        else c[k++]=b[j++];
        }
    while(i<n1){
        c[k++]=a[i++];
        }
    while(j<n2){
        c[k++]=b[j++];
        }
    cout<<"Union is"<<endl;
    for (int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }

    }
