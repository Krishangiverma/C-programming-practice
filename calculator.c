//calculator
#include<stdio.h>
int main(){
   float num1,num2,result;
   char operator;
   printf("enter first number: ");
   scanf("%f",&num1);

   printf("enter an operator(+,-,*,/): \n");
   scanf(" %c",&operator);//space before %c is important coz if u write without
   //spaces it catches the newline instead of waiting for your operator

   printf("enter second number: ");
   scanf("%f",&num2);

   if(operator=='+'){
    result=num1+num2;
    printf("result:  %.2f\n",result);
   } else if(operator=='-'){
    result=num1-num2;
    printf("result:  %.2f\n",result);
   }else if(operator=='*'){
    result=num1*num2;
    printf("result:  %.2f\n",result);
}else if(operator=='/'){
    if(num2!=0){
 result=num1/num2;
    printf("result:  %.2f\n",result);
    }else{
        printf("error: division by zero!\n");
    }
} else{
        printf("invalid operator!\n");
    }
    return 0;
}