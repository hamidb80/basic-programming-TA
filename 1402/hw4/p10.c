#include <stdio.h>

void reverse_count(int n)
{
  if (n == 0)
  {
  }
  else
  {
    printf("%d\n", n);
    reverse_count(n - 1);
  }
}

int main()
{
  int n;
  printf("n: ");
  scanf_s("%d", &n);

  reverse_count(n);
}
