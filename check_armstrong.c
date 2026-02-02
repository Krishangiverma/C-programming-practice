// check armstrong
#include <stdio.h>
#include <math.h>

void checkarmstrong(int n)
{
    int cubesum = 0, rem, temp = n;
    while (n != 0)
    {
        rem = n % 10;
        cubesum = pow(rem, 3) + cubesum;
        n = n / 10;
    }
    if (cubesum == temp)
    {
        printf("yes armstrong");
    }
    else
    {
        printf("not a armstrong");
    }
}
int main()
{
    int num;
    printf("enter your number :");
    scanf("%d", &num);
    checkarmstrong(num);

    return 0;
}