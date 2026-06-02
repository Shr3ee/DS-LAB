#include <stdio.h>
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int key=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[key])    key=j;
        }
        int temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }
}
int main(){
    int n;
    printf("Enter Length of Array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

}
