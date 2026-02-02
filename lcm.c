// lcm of two numbers
// LCM=a*b/GCD

#include <stdio.h>
int findGCD(int a, int b)
{
    int i, gcd;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}
int findLCM(int a, int b)
{
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}
int main()
{
    int num1, num2, lcm;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    lcm = findLCM(num1, num2);

    printf("LCM od %d and %d is %d", num1, num2, lcm);
    return 0;
}