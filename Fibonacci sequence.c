#include <stdlib.h>
#include <time.h>
#include <stdio.h>
float fibonacci(int x)
{
    int a, b, c, i;
    for (a = b = i = 1; i <= x; i++)
    {
        c = b;
        b += a;
        a = c;
    }
    return (float)a;
}
void t()
{
    time_t now;
    time(&now);
    printf("%s\n", __TIMESTAMP__);
    printf("%s", ctime(&now));
}
int main()
{
    int x, n;
    float sum;
    scanf("%d", &n);
    for (x = 0; x < n; x++)
        sum += fibonacci(x + 2) / fibonacci(x + 1);
    printf("%f\n", sum);
    t();
    system("pause");
    return 0;
}