#include <stdio.h>

int main()
{
  int x = 7, y = 12, m = 4;
  int k = (x * 2) / (y++) + y / (--m);
  printf("k = %d\n", k);
  printf("(7*2)/12 + 13/3 = %d\n", (7*2)/12 + 13/3);
  printf("13/3 = %d\n", 13/3);
  printf("(7*2)/12 = %d\n", (7*2)/12);

  int u;


  u = 3;
  printf("u = %d\n", u);

  u = 3;
  printf("(--u) = %d\n", (--u));

  u = 3;
  printf("(u--) = %d\n", (u--));

  u = 3;
  printf("(--u) + u = %d\n", (--u) + u);

  u = 3;
  printf("(u--) + u = %d\n", (u--) + u);
}