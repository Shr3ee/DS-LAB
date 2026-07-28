#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c=0;
    // scanf("%d%d",&a,&b);
    // while(a!=b){
    //     if(a>b) b=b+2;
    //     else    a++;
    //     c++;}
    // printf("%d",c);
    cin>>a>>b;
    if(a==b){
        cout<<c;
        return 0;}
    else if (a<b)   b-a;
    else{
        int diff=a-b;
        if(diff%2==0)   c=diff/2;
        else    c=(a-b)/2+2;
    }
    cout<<c;
    
}
