//swap using 3rd variable using ptr
#include<stdio.h>
void swap(int*a,int*b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main() {
    int num1,num2;
    printf("enter value of a and b\n");
    scanf("%d %d",&num1,&num2);
    printf("values before swapping\n");
    printf("a:  %d\n",num1);
    printf("b:  %d\n",num2);
    swap(&num1,&num2);
    printf("values after swapping\n");
    printf("a:  %d\n",num1);
    printf("b:  %d\n",num1);
    
return 0;
}