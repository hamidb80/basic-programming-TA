#include <stdio.h>

void printer(int i, int j, char c)
{
  for (int x = 0; x <= j; x++)
  {
    if (x >= i)
    {
      printf("%c", c);
    }
    else
    {
      printf(" ");
    }
  }
}

int main()
{
  int i, j;
  char ch;

  printf("i j: ");
  scanf_s("%d %d", &i, &j);
  printf("character: ");
  scanf_s("\n%c", &ch);

  printer(i, j, ch);
}