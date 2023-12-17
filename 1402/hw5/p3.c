#include <stdio.h>
#include <string.h>

void getArray(int arr[], int len)
{
  for (int i = 0; i < len; i++)
    scanf("%d", &arr[i]);
}

void cat(int a[], int b[], int len, int dest[])
{
  for (int i = 0; i < len; i++)
  {
    dest[i] = a[i];
    dest[len + i] = b[i];
  }
}

void sort(int a[], int len)
{
  for (int i = 0; i < len; i++)
    for (int j = i + 1; j < len; j++)
      if (a[i] > a[j])
      {
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
}

void printArr(int a[], int len)
{
  for (int i = 0; i < len; i++)
    printf("%d ", a[i]);
}

int main()
{
  int
      a[5],
      b[5],
      c[10];

  printf("enter 5 numbers [a]: ");
  getArray(a, 5);

  printf("enter 5 numbers [b]:");
  getArray(b, 5);

  cat(a, b, 5, c);
  sort(c, 10);

  printf("result: ");
  printArr(c, 10);
}