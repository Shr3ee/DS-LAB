#include <bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
    int m=0;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        for(int j=i;j<=n-1;j++){
            if(a[j]<min){
                min=a[j];
                m=j;}
        }
        swap(a[i],a[m]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void bubble(int a[],int n){
    bool s=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                s=true;
            }
        }
        if (s==false)   break;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    bubble(arr, sizeof(arr) / sizeof(arr[0]));
    
}