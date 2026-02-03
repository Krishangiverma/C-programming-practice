//allocate memory for 5 no. then dynamically inc to 8 no.

#include<stdio.h>
#include<stdlib.h>
int* allocatememory(int* arr,int size){
    arr=(int*)realloc(arr,size*sizeof(int));


if(arr==NULL){
    printf("memory not allocated\n");
    exit(1);
}
return arr;
}
int main(){
    int*arr;
    int i;
    arr=allocatememory(NULL,5);
printf("enter 5 numbers");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
    arr=allocatememory(arr,8);
printf("enter 3 more no");
for(i=5;i<8;i++){
    scanf("%d\n",&arr[i]);
}
printf("you entered\n");
for(i=0;i<8;i++){
    printf("%d",arr[i]);
}
free(arr);
return 0;
}