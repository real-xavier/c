#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int f(int n)
{
    int a, b, c, i;
    for (a = b = i = 1; i <= n; i++)
    {
        c = b;
        b += a;
        a = c;
    }
    return a;
}
int main()
{
    int n, x;
    float fraction, sum;
    printf("");
    scanf("%d", &x);
    for (n = 1; n <= x; n++)
    {
        fraction = (float)f(n + 1) / (float)f(n);
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
