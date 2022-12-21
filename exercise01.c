#include <stdlib.h>
#include <stdio.h>
#define N 13
int main()
{
    int r, c, a[N][N]={};
    for (r = a[0][0] = 1; r < N; r++)
    {
        for (c = 1; c <= r; c++)
        {
            a[r][c] = a[r - 1][c - 1] + a[r - 1][c];
            printf("%-4d", a[r][c]);
        }
        printf("\n");
    }
    return 0;
}
