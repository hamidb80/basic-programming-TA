#include <stdio.h>

int main()
{
  float a, b;
  scanf_s("%fx%f", &a, &b);
  printf("S = %f\n", (1.0 / 2) * a * b);
}