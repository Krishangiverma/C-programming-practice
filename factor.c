//find all factors of a natural number
#include<stdio.h>
void printfactors(int num){
    printf("factors of %d are: \n",num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d\n",i);
        }
    }
    printf("\n");
}
int main(){
    int number;
    printf("enter a natural number: ");
    scanf("%d",&number);

    if(number<=0){
        printf("enter a positive natural number");
    } else {
        printfactors(number);
    }
    
    return 0;
}