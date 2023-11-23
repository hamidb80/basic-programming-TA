#include <stdio.h>

int main()
{
  int x;
  scanf_s("%d", &x);

  float y = 1.0 / (x * x + x + 3);
  printf("%f\n", y);
}