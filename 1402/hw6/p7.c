#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max2(int a, int b)
{
  if (a < b)
    return b;
  else
    return a;
}

int max3(int a, int b, int c)
{
  return max2(max2(a, b), c);
}

int main(int tedad, char **vorudiHa)
{
  if (tedad == 4)
  {
    int
        a = atoi(vorudiHa[1]),
        b = atoi(vorudiHa[2]),
        c = atoi(vorudiHa[3]);

    printf("max = %d", max3(a, b, c));
  }
  else
  {
    printf("invalid number of arguements");
  }
}