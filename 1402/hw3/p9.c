#include <stdio.h>

int main()
{
  // کد اصلی
  {
    int i = 1;
    while (i <= 10)
    {
      if (i < 5 && i != 2)
        printf("%c", 'x');

      i++;
    }
  }
  printf("\n");
  // معادل
  {
    for (int i = 1; i <= 10; i++)
    {
      if (i < 5 && i != 2)
        printf("%c", 'x');
    }
  }
}