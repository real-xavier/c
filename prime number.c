#include <stdlib.h>
#include <stdio.h>
#define N 100000
int main()
{
    int n, x, count = 0;
    for (n = 2; n <= N; n++)
    {
        for (x = 2; x <= n / 2; x++)
        {
            if (n % x == 0)
                break;
        }
        if (n % x == 0)
            continue;
        printf("%d\t", n);
        count++;
        if (count % 10 == 0)
            printf("\n");
    }
    printf("%d\n", count);
    system("pause");
    return 0;
}
