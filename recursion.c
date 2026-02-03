//sum of natural number using recursion
#include<stdio.h>
//recursive function to calculate sum
int sum(int n){
    if(n==0)//base case
    return 0;
    else
    return n+sum(n-1);//recursive step
}
int main(){
    int n;
    printf("enter a positive number: ");
    scanf("%d",&n);

    if(n<0)
    printf("please enter a positive number\n");
    else
    printf("sum of first %d natural number =%d\n",n,sum(n));
    return 0;
}