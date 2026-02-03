//remove duplicate elements from a sorted array
#include<stdio.h>

int removeduplicates(int arr[],int n){
    if(n==0||n==1)
    return n;
    int j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
            arr[j++]=arr[n-1];
            return j;
        }
    }
}

int main(){
    int n,i;
    printf("enter number of elemrnts: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d sorted elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int newsize=removeduplicates(arr,n);
    printf("array after removing duplicates:\n");
    for(i=0;i<newsize;i++){
        printf("%d",arr[i]);
    }
    return 0;
}