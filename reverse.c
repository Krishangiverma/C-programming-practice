 //reverse a given number
 #include<stdio.h>
 int main() {
int num,rev=0,rem,n;
printf("enter a number :");
scanf("%d",&num);
n=num;
while(num!=0){
rem=num%10;//get last digit
rev=rev*10+rem;//add it to reversed number
num=num/10;//remove last digit
}
printf("the reversed number is : %d\n",rev);
return 0;
 }
 //1st iteration  let num=456 and rev =0 
 // rem = num%10 -->456%10=6
 //rev=rev*10+rem--> 0*10+6=6
 //num=num/10--> 456/10=45
 //2nd iteration rem=45%10=5
 //rev=6*10+5=65
 //num45/10 =4
 //3rd iteration rem=4%10=4
 //rev= 65*10+4=654
 //num=4/10=0(loop end) hence the reversed no. is 654