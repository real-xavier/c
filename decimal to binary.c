#include <stdio.h>
long long _10to2(short n)
{
   switch (n)
   {
   case 0: return 0;
   case 1: return 1;
   case 2: return 10;
   default: return n % 2 + 10 * _10to2(n / 2);
   }
}
int main()
{
   for (short i = 1; i <= 8192; i++)
      printf("%-8hd%lld\n", i, _10to2(i));
   return 0;
}