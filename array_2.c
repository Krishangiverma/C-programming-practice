//frequency(repeat)of an array
#include<stdio.h>
int find_frequency(int arr[],int size,int element){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            count++;
        }
    }
    return count;
}
int main(){
    int size=8;
    int arr[10]={1,22,3,4,56,22,1};
    int element;
    
    printf("enter element to check frequency: ");
    scanf("%d",&element);

    int count=find_frequency(arr,size,element);
    

    printf(" frequency of %d is  %d\n",element,count);
    return 0;
}