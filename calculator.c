// make a calculator
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int main()
{
    int a, b, choice;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1.addition");
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.division");

    printf("\nenter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("result=%d", add(a, b));
        break;

    case 2:
        printf("result=%d", sub(a, b));
        break;

    case 3:
        printf("result=%d", mul(a, b));
        break;

    case 4:
        printf("result= %.2f", divide(a, b));
        break;

    default:
        printf("invalid choice");
    }
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
float divide(int a, int b)
{
    return (float)a / b;
}