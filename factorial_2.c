//factorial of a number using recursion
#include<stdio.h>
int factorial(int n){
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    if(n<0)
    printf("factorial is not defined for negative numbers\n");
    else
    printf("factorial of %d =%d\n",n,factorial(n));
    return 0;
}