#include <stdio.h>

void findMax(int arr[5], int *maxIndex, int *maxNumber)
{
  *maxIndex = 0;
  *maxNumber = 0;

  for (int i = 0; i < 5; i++)
    if (arr[i] > *maxNumber)
    {
      *maxNumber = arr[i];
      *maxIndex = i;
    }
}

int main()
{
  int a[5];

  for (int i = 0; i < 5; i++)
    scanf("%d", &a[i]);

  int maxIndex, maxNumber;
  findMax(a, &maxIndex, &maxNumber);

  printf("max(index: %d, num: %d)\n", maxIndex, maxNumber);
}
