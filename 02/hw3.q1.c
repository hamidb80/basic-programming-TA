#include "stdio.h"

int main()
{
  int max1 = 0;
  int max2 = 0;

  for (int x = 0; x < 10; x++)
  {
    int y;
    scanf("%d", &y);

    if (y > max1)
    {
      max2 = max1;
      max1 = y;
    }
    else if (max2 < y)
    {
      max2 = y;
    }
  }
  printf("#1=%d #2=%d", max1, max2);
}