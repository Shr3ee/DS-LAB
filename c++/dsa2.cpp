#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c=1;
        cin>>a>>b;
        while(b>a){
            if(c%2==0){
                a=a+2;
                c++;
            }
            else{
                a++;
                c++;
            }}
        if(a==b)    cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
}
    

