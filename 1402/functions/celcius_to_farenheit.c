#include <stdio.h>

// declaration
// float celcius_to_farenhiet(float celsuis);
float celcius_to_farenhiet(float);

int main()
{
  float f;
  scanf_s("%f", &f);
  printf("%f", celcius_to_farenhiet(f));
}

// implememtation
float celcius_to_farenhiet(float celsuis)
{
  return celsuis * 9 / 5 + 32;
}
