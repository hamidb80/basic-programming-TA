#include <stdio.h>

int main()
{
  // if else-if else
  int n;
  scanf("%d", &n);

  if (n > 0)
  {
  }
  else if (n == 0)
  {
  }
  else
  {
  }

  // switch case
  if (n == 1)
  {
  }
  else if (n == 0)
  {
  }
  else if (n == -1)
  {
  }
  else if (n == -2)
  {
  }
  else if (n == -3)
  {
  }
  else
  {
  }

  switch (n)
  {
  case 1:
    printf("1");
    break;

  case 0:
    printf("0");
    break;

  case -1:
    printf("-1");
    break;

  default:
    break;
  }

  // while
  int i = 0;
  while (i < 10)
  {
    /* code */
    i++;
  }

  // for
  for (int i = 0; i < 10; i++)
  {
    /* code */
  }

  for (; i < 10;)
  {
    /* code */
  }

  for (int x = 0, y = 0; x < 3 && y < 4; (x++ && y++))
  {
    /* code */
  }
}