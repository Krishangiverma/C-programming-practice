//find max and min element in array

#include<stdio.h>
int findmax(int arr[],int n){
int max=arr[0];
for(int i=1;i<=n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}
int findmin(int arr[],int n){
int min=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
return min;
}
int main(){
    int n;
    int arr[100];
    printf("enter number of elements");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maximum=findmax(arr,n);
    int minimum=findmin(arr,n);

    printf("maximum element= %d\n",maximum);
    printf("minimum element =%d\n",minimum);
    return 0;
}