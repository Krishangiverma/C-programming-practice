//allocate memory of size n,where n is entered by user
#include<stdio.h>
#include<stdlib.h>
int main() {
int *arr;

int n, i;

printf("enter number of elements: ");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL){
    printf("memory not allocated\n");
    return 1;
}
printf("enter %d elements\n",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("you entered: \n");
for(i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
free(arr);
return 0;
}