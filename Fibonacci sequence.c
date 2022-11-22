#include <stdlib.h>
#include <time.h>
#include <stdio.h>
float fibonacci(int x)
{
    int i[4];
    for (i[0] = i[1] = i[2] = 1; i[0] <= x; i[0]++)
    {
        i[3] = i[2];
        i[2] += i[1];
        i[1] = i[3];
    }
    return (float)i[1];
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
