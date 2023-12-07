#include <stdio.h>

float miangin(float a, float b, float c)
{
  return (a + b + c) / 3;
}

int main()
{
  float a, b, c;
  printf("a b c: ");
  scanf_s("%f %f %f", &a, &b, &c);

  printf("miangin: %f", miangin(a, b, c));
}