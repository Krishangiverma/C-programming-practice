//create an array of size 5(using calloc)& enter its value from user


#include<stdio.h>
#include<stdlib.h>
int* allocatememory(int size){
    int*arr=(int*)calloc(size,sizeof(int));


if(arr==NULL){
    printf("memory not allocated\n");
    exit(1);
}
return arr;
}
void inputarray(int* arr,int size){
    printf("enter %d integers \n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void printarray(int* arr,int size){
    printf("you enterd\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}
int main(){
    int*arr;
    int size=5;
    arr=allocatememory(size);
    inputarray(arr,size);
    printarray(arr,size);
    free(arr);
    return 0;
}

