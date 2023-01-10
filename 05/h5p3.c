#include <stdio.h>

void merge(int a[], int b[], int len, int dest[])
{
  for (int i = 0; i < len; i++)
    dest[i] = a[i];

  for (int i = 0; i < len; i++)
    dest[i + len] = b[i];
}

void sort(int a[], int len)
{
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = i + 1; j < len; j++)
    {
      if (a[i] < a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

void getInput(int a[], int len)
{
  printf("enter numbers: ");

  for (int i = 0; i < len; i++)
    scanf("%d", &a[i]);
}

void printArr(int a[], int len)
{
  for (int i = 0; i < len; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main()
{
  int a[5], b[5], c[10];

  getInput(a, 5);
  getInput(b, 5);

  sort(a, 5);
  sort(b, 5);

  printArr(a, 5);
  printArr(b, 5);

  merge(a, b, 5, c);
  sort(c, 10);
  printArr(c, 10);
}