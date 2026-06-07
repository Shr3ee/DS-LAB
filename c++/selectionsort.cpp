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
int main(){
    int arr[6]={13,46,24,52,20,9};
    selectionsort(arr, sizeof(arr) / sizeof(arr[0]));
    
}