#include <stdio.h>

int main()
{
  for (int y = 0; y <= 4; y++)
  {
    for (int x = 0; x <= 4; x++)
    {
      if (x == 0 || x == 4 || y == 0 || y == 4 || x == y || x + y == 4)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}

/* output:

*****
** **
* * *
** **
*****

*/