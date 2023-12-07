#include <stdio.h>

int main()
{
  float
      a = -1,
      b = -1;

  while (1)
  {
    printf("a b: ");
    scanf_s("%f %f", &a, &b);

    if (a == 0 && b == 0)
      break;
    else
      printf("%.2f*%.2f - %.2f/%.2f = %.2f\n", a, b, a, b, a * b - a / b);
  }
}