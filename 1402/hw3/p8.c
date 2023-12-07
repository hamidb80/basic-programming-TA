#include <stdio.h>

int main()
{
  // کد اصلی
  {
    int x = 5;

    while (--x > 0)
      printf("%3d", x);
  }

  printf("\n");

  // معادل
  {
    int x = 5;

    while (1)
    {
      x = x - 1;
      if (x > 0)
      {
        printf("%3d", x);
      }
      else
        break;
    }
  }
}