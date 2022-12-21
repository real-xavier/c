#include <stdio.h>
#define N 100000
main()
{
    int count = 0;
    for (int n = 2; n <= N; n++)
    {
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                goto end;
        count++;
        printf("%-6d%c", n, count % 10 ? 32 : 10);
    end:;
    }
    printf("%d\n", count);
    return 0;
}