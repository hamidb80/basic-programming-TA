#include <stdio.h>
#include <string.h>

int toInt(char digit)
{
  return digit - '0';
}

void readString(char s[], int size)
{
  for (int i = 0; i < size; i++)
    s[i] = getchar();
  getchar();
}

void toIntArr(char s[], int number[], int size)
{
  for (int i = 0; i < size; i++)
    number[i] = toInt(s[i]);
}

void printNumber(int s[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d", s[i]);
  printf("\n");
}

void sumNumber(int dest[], int n1[], int n2[], int size)
{
  for (int i = size - 1; i >= 0; i--)
  {
    int d = dest[i + 1] + n1[i] + n2[i];
    dest[i + 1] = d % 10;
    dest[i] = d / 10;
  }
}

int main()
{
  char
      numberString1[5],
      numberString2[5];

  readString(numberString1, 5);
  readString(numberString2, 5);

  int
      numberArr1[5],
      numberArr2[5];

  toIntArr(numberString1, numberArr1, 5);
  toIntArr(numberString2, numberArr2, 5);

  int result[6] = {0};
  sumNumber(result, numberArr1, numberArr2, 5);
  printNumber(result, 6);
}