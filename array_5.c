//calculate average of all elemennts present in array

#include<stdio.h>
float calculateaverage(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return(float)sum/n;
}
int main(){
    int n;
printf("enter number of elements");
    scanf("%d",&n);

    int arr[n];
    printf("enter %d elements: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float average=calculateaverage(arr,n);
    printf("the average of array element is %.2f\n",average);
    return 0;
}