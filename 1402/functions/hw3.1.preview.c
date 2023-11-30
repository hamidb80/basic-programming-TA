#include <stdio.h>

int main()
{
  int count;
  printf("n = ");
  scanf("%d", &count);

  int max = 0;

  for (int i = 0; i < count; i++)
  {
    int m;
    printf("modalele dj #%d: ", i + 1);
    scanf("%d", &m);
    if (m > max)
    {
      max = m;
    }
  }

  printf("\nmax was %d\n", max);
}