//find largest elements in an array
#include<stdio.h>
int findlargest(int arr[],int n){
    int max=arr[0];//assume first element is largest
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=findlargest(arr,n);
    printf("largest elements in the array is : %d\n",largest);

    return 0;
}