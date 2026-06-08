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
void insertion(int a[],int n){
    for(int i=1;i<n;i++){
        int m=a[i];
        int j=i-1;
        while(j>=0 && a[j]>m){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=m;
    }
}
void merge(int arr[], int l, int mid, int h){
    vector<int> v(h-l+1);
    int p=l,q=mid+1,k=0;
    while(p<=mid && q<=h){
        if(arr[p]<=arr[q])   v[k++]=arr[p++];
        else    v[k++]=arr[q++];
    }
    while(p<=mid){
        v[k++]=arr[p++];
    }
    while(q<=h){
        v[k++]=arr[q++];
    }
    for(int i=l;i<=h;i++){
        arr[i]=v[i-l];
    }
}
void msort(int arr[], int l,int h){
    if(l>=h)    return;
    int mid=(l+h)/2;
    msort(arr,l,mid);
    msort(arr,mid+1,h);
    merge(arr,l,mid,h);
}

int main(){
    int arr[6]={13,46,24,52,20,9};
    int n=sizeof(arr) / sizeof(arr[0]);
    msort(arr, 0,n-1);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    
}