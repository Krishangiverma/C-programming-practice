
// sum of fibonacci numbers at even indexes upto n terms
#include <stdio.h>
int main()
{
    int n, i;
    int a = 0, b = 1, c;
    int sum = 0;

    printf("enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            c = a;
        }
        else if (i == 1)
        {
            c = b;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        if (i % 2 == 0)
        {
            sum = sum + c;
        }
    }
    printf("sum is %d", sum);
    return 0;
}