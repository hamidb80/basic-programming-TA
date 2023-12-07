#include <stdio.h>

int main()
{
  int n;
  printf("n: ");
  scanf_s("%d", &n);

  int
      max1 = -1,
      max2 = -1,
      id1 = -1,
      id2 = -1,
      mi = -1,
      new_id = -1;

  for (int i = 0; i < n; i++)
  {
    printf("shomare daneshjooee %d: ", i + 1);
    scanf("%d", &new_id);

    printf("moadel %d: ", i + 1);
    scanf("%d", &mi);

    if (mi >= max1) // halat 1
    {
      max2 = max1;
      id2 = id1;

      max1 = mi;
      id1 = new_id;
    }
    else if (mi > max2) // halat 2
    {
      max2 = mi;
      id2 = new_id;
    }
    else // halat 3
    {
    }
  }

  printf("daneshjooe %d moadel #2 = %d", id2, max2);
}