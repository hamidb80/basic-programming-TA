#include <stdio.h>

void getArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
}

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void merge(int s1[], int s2[], int dest[], int sourceSize)
{
  for (int i = 0; i < sourceSize; i++)
    dest[i] = s1[i];

  for (int i = 0; i < sourceSize; i++)
    dest[i + sourceSize] = s2[i];
}

void sortArr(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
}

int main()
{
  int s1[5], s2[5];
  getArr(s1, 5);
  getArr(s2, 5);

  sortArr(s1, 5);
  sortArr(s2, 5);

  int dest[10];
  merge(s1, s2, dest, 5);
  sortArr(dest, 10);
  printArr(dest, 10);
}