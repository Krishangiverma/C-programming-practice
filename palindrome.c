//palindrome
#include<stdio.h>
void checkpalindrome(int n){
    int rem=0,temp=n;
    while(n!=0){
        rem=rem*10+n%10;
        n=n/10;
    }
    if(rem==temp){
        printf("yes palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
    int main() {
        int num;
        printf("enter your number: ");
        scanf("%d",&num);
        checkpalindrome(num);
        return 0;
    
}