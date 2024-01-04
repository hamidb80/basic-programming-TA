#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

int sum(int *);

int sum(int *b)
{
  int result = 0;
  for (int i = 0; i < 100; i++)
    result += b[i];
}

int main()
{
  {
    int n;
    scanf_s("%d", &n);

    if (n < 8)
    {
      n = 8;
    }
    // int a[100];
    // int a[n];
    // int *a = malloc(sizeof(int) * n);

    // for (int i = 0; i < n; i++)
    //   scanf_s("%d", &a[i]);
  }
  {
    int *a;
    int b = 4;
    a = &b;

    // a * b

    *a = 1;
    *a = 1;

    printf("*a= %d b = %d", *a, b);
  }
}