#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main()
{
    int factor, n, x, count = 0;
    for (n = 2; n <= 25000; n++)
    {
        for (x = 2, factor = 0; x <= n / 2; x++)
        {
            if (n % x == 0)
            {
                factor++;
                break;
            }
        }
        if (factor == 0)
        {
            printf("%d\t", n);
            count++;
            if (count % 10 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
    time_t now;
    time(&now);
    printf("Program build time: %s\n", __TIMESTAMP__);
    printf("Current local time: %s", ctime(&now));
    system("pause");
    return 0;
}
