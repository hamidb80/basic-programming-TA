#include <stdio.h>

int main()
{

  float
      y = 7,
      m = 4,
      p = 5,
      k = 8,
      r = 2,
      x = (-y + 3) * (-y + 3) / (m * 2 + p);

  printf("x = %f\n", x);

  y = (1 / x) * (1 / x) + (m * m - (k / (r + 2))) * (12 + k);

  printf("y = %f\n", y);
}