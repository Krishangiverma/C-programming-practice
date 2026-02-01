// check whether a number is prime or not 

#include<stdio.h>
int isprime(int n){
//0 and 1 are not prime numbers
if(n<=1)
return 0;
//check divisibility from 2 to n-1
for(int i=2;i<n;i++)
{
    if(n%i==0)
    return 0;//not prime
}
return 1;//prime
}

int main(){
    int num;
    printf("enter a number to check: ");
    scanf("%d",&num);
    
    if(isprime(num))
    printf("prime number");
    else
    printf("not a prime number");
    return 0;

}