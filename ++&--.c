#include <stdio.h>

int main()
{
  int
      i = 7,
      j = 7,
      ii = 7,
      jj = 7,

      n = (i--) * 100 + (i--) * 10 + (i--) * 1,
      m = (--j) * 100 + (--j) * 10 + (--j) * 1,

      nn = (ii--) + (ii--) + (ii--),
      mm = (--jj) + (--jj) + (--jj);

  printf("n = %d, m = %d\n", n, m);
  printf("nn = %d, mm = %d\n", nn, mm);
}
// ----------- RESULT -------------
// seriosly why????
// n = 765, m = 654
// nn = 18, mm = 14