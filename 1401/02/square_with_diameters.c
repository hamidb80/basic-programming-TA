#include <stdio.h>

void draw(int n)
{
  for (int y = 0; y < n; y++)
  {
    for (int x = 0; x < n; x++)
    {
      if (x == 0 || x == n - 1 || y == 0 || y == n - 1 || x == y || x + y == n - 1)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}

int main()
{
  draw(7);
}

/* output:

*******
**   **
* * * *
*  *  *
* * * *
**   **
*******

*/