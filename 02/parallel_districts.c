#include <stdio.h>

void draw(int n)
{
  for (int y = 0; y < n; y++)

  {
    int s = n - y;
    for (int x = 0; x < s; x++) // space
    {
      printf(" ");
    }

    for (int x = 0; x < n; x++) // *
    {
      printf("*");
    }
    printf("\n");
  }
}

int main()
{
  int n;
  scanf("%d", &n);

  draw(n);
}

/* output [for input 5]:

     *****
    *****
   *****
  *****
 *****

*/