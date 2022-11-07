#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int f(int n)
{
    int a, b, c, i;
    for (a = b = i = 1; i <= n; i++)
    {
        c = b;
        b = a + b;
        a = c;
    }
    return a;
}
int main()
{
    int n, x, j;
    float numerator, denominator, fraction, sum;
    printf("");
    scanf("%d", &x);
    for (j = n = 1; j <= x; j++)
    {
        denominator = (float)f(n);
        n++;
        numerator = (float)f(n);
        fraction = numerator / denominator;
        sum += fraction;
    }
    printf("%f", sum);
    printf("\n");
    time_t now;
    time(&now);
    printf("%s\n", __TIMESTAMP__);
    printf("%s", ctime(&now));
    system("pause");
    return 0;
}