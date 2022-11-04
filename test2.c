#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, sum, factor;
    for (n = 1; n < 100000000; n++)
    {
        for (factor = 1, sum = 0; factor <= n / 2; factor++)
        {
            if (n % factor == 0)
                sum = sum + factor;
        }
        if (sum == n)
            printf("%d\n", n);
    }
    time_t now;
    time(&now);
    printf("Program build time: %s\n", __TIMESTAMP__);
    printf("Current local time: %s", ctime(&now));
    system("pause");
    return 0;
}