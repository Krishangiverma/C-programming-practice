// check neon number
#include <stdio.h>
void checkneon(int n)
{
    int square = n * n;
    int sum = 0, digit;
    while (square > 0)
    {
        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }
    if (sum == n)
        printf("%d is a neon number\n", n);
    else
        printf("not a neon number");
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);

    checkneon(num);
    return 0;
}