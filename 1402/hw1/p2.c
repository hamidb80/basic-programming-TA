#include <stdio.h>

int main()
{

  int
      x = 10,
      y = 15,
      m = 4;

  int k1 = x / 4.0 * y / 2.0 * m;
  printf("k1 = %d\n", k1);

  float k2 = x / (float)(y++) + y / (float)(--m);
  printf("k2 = %f\n", k2);
}