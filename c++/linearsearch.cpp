#include <iostream>
using namespace std;
int reclinearsearch(int arr[],int n,int key){
    if(n==0)    return -1;
    if(arr[n-1]==key)   return n-1;
    return reclinearsearch(arr,n-1,key);
}
int recbinarysearch(int arr[],int n,int key){
    
}
int linearSearch(int arr[],int n,int key) {
    for (int i=0;i<n;i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int binarySearch(int arr[],int n,int key) {
    int low=0,high=n-1;
    while (low<=high) {
        int mid=(low+high)/2;
        if (arr[mid]==key)
            return mid;
        else if (arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main() {
    int n, key, choice;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the element to search: ";
    cin>>key;
    cout<<"\nChoose Search Method:\n";
    cout<<"1. Linear Search\n";
    cout<<"2. Binary Search\n";
    cout<<"Enter your choice: ";
        cin>>choice;
    int result;
    switch (choice) {
        case 1:
            result=linearSearch(arr, n, key);
            break;
        case 2:
            result=binarySearch(arr, n, key);
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            return 0;
    }
    if (result!=-1)
        cout<<"Element found at index "<<result<<endl;
    else
        cout<<"Element not found."<<endl;
    return 0;
}