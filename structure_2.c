//make a structure to store bank account information of a customer of ABC account

#include<stdio.h>
typedef struct bankcustomer{ 
    char name[50];
    int accno;
    char acctype[20];
    float balance;
} customer;
int main() {
    customer c1;
    printf("enter name: ");
    scanf("%s",c1.name);
    printf("enter account no : ");
    scanf("%d",&c1.accno);
    printf("enter account type(saving/current): ");
    scanf("%s",c1.acctype);
    printf("enter balance: ");
    scanf("%f",&c1.balance);
    printf("\n.   account info\n");
    printf("name: %s\n",c1.name);
     printf("acc no: %d\n",c1.accno);
     printf("acc type: %s\n",c1.acctype);
    printf("balance: %.2f\n",c1.balance);

   return 0;

}