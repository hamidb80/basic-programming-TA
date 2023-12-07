#include <stdio.h>

int reverse(int n)
{
  int javab = 0;

  while (n != 0)
  {
    javab = (javab * 10) + (n % 10);
    n /= 10;
  }
  
  return javab;
}

int main()
{
  int a, b;
  scanf_s("%d.%d", &a, &b);
  printf("%d.%d", reverse(b), reverse(a));
}