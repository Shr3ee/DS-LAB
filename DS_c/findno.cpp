#include <iostream>
using namespace std;
/*int main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];}
    for (int i=0;i<n-1;i++){
        if (arr[i+1]-arr[i]==1) continue;
        else {
            c=arr[i+1]-1;
            break;}}
    cout<<"This number is missing:"<<c;
}*/
int main(){
    int n,c=0;
    cin>>n;
    int arr[10];
    for (int i=1;i<n;i++){
        cin>>arr[i];}
    for (int i=1;i<n;i++){
        if (arr[i]!=i) {
            cout<<i;
            break;
        }
        
    }


}



