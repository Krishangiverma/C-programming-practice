//factorial of a no.
#include<stdio.h>
int calcfact(int n)
{
    int factorial=1;
    int temp;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
        printf("%d",factorial);
    }
int main(){
    int num;
    printf("enter your number\n");
    scanf("%d",&num);
    printf("factorial is: ");
    calcfact(num);
    return 0;
}