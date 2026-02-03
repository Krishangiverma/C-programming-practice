//short elements of an array in descending order

#include<stdio.h>
void sortdescending(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
if(arr[i]<arr[j]){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
        }
    }
}

int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d elements: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
}
sortdescending(arr,n);

printf("array in decreasing order: \n");
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
printf("\n");
return 0;
}