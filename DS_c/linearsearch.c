#include <stdio.h>
 main(){
    int n,i,key;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements of array:");
    int arr[n];
    for (int j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if (arr[i]==key){
            printf("Key found at %d", i);
            break;
        }
    }
    if(i==n) printf("Key not found!");
}

