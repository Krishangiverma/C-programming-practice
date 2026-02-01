// print all prime number between 1 to n

#include <stdio.h>
int isprime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);

    printf("prime numbers between 1 to %d are:\n", n);

    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}