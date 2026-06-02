#include <iostream>
#include <string>
using namespace std;
void pattern1(int n){
    for(int i=0;i<n;i++){
        cout<<string(n,'*')<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=n;i>0;i--){
        for(int j=i-1;j>0;j--){
            cout<<' ';
        }
        for(int k=0;k<=n-i;k++){
            cout<<'*';
        }
        for(int l=0;l<n-i;l++){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<' ';
        }
        for(int k=i;k>0;k--){
            cout<<'*';
        }
        for(int l=i-1;l>0;l--){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=n;i>0;i--){
        for(int j=i-1;j>0;j--){
            cout<<' ';
        }
        for(int k=0;k<=n-i;k++){
            cout<<'*';
        }
        for(int l=0;l<n-i;l++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout<<' ';
        }
        for(int k=i;k>0;k--){
            cout<<'*';
        }
        for(int l=i-1;l>0;l--){
            cout<<'*';
        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0 && j%2==0 || i%2!=0 &&j%2!=0)    cout<<'1';
            else    cout<<'0';
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;}
        for(int k=(n-i)*2;k>0;k--){
            cout<<'-';
        }
        for(int l=0;l<i;l++){
            cout<<i-l;
        }
        cout<<endl;
    }
}

int main(){
    int n=4;
    pattern11(n);
}


