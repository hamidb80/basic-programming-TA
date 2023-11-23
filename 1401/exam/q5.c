#include <stdio.h>

void numberToArray(int number, int arr[5])
{
  for (int i = 5 - 1; i >= 0; i--)
  {
    arr[i] = number % 10;
    number /= 10;
  }
}

void printArray(int arr[5])
{
  for (int i = 0; i < 5; i++)
    printf("%8d", arr[i]);
  printf("\n");
}

int main()
{
  while (1)
  {
    int number;
    int array[5];

    printf("enter a 5-digit number: ");
    scanf("%d", &number);
    numberToArray(number, array);
    printArray(array);

    int answer;
    printf("wanna continue? [enter 0 to cancel] ");
    scanf("%d", &answer);
    if (answer == 0)
      break;
  }
}