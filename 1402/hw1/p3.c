#include <stdio.h>

int main()
{

  int
      x = 8,
      m = 6,
      y = (x ^ 2 < m + 4) ? (4 * m) : (8 * m);

  // printf("8 ^ 2 = %d\n", 8 ^ 2);
  // printf("13^ 7 = %d\n", 13^ 7);
  printf("y = %d\n", y);
  printf("%d\n", 10 < 10);
  printf("%d\n", 10 < 10 ? 1 : 0);
  printf("x^2 < m+4 = %d\n", x ^ 2 < m + 4);
  printf("m + 4 = %d\n", m + 4);
  printf("x ^ 2 = %d\n", x ^ 2);

}