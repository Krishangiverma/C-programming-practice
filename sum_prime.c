//check whether a number can be express as sum of two prime numbers
#include<stdio.h>
int isprime(int n){
    if(n<=1)
    return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
void checksumofprimes(int n){
    for(int i=1;i<=n/2;i++){
        if(isprime(i) && isprime(n-i)) {
            printf("%d can be expressed as %d+%d\n",n,i,n-i);
            return ;
        }
    }
    printf("%d cannot be expressed as sum of two prime numbers\n",n);
}
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    checksumofprimes(num);
    return 0;
}