#include <stdio.h>

int main()
{
  float kg;
  scanf_s("%f", &kg);
  printf("%.2f grams\n", kg * 1000);
}