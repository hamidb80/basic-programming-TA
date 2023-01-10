#include <stdio.h>

#define MAXLEN 6
#define LEN 5

void toIntArr(char s[], int n[], int len)
{
  for (int i = 0; i < len; i++)
    n[i] = s[i] - '0';
}

void sum(int n1[], int n2[], int result[], int len)
{
  for (int i = len-1; i >= 0; i--)
  {
    int sumOfOneDigit = n1[i] + n2[i];
    result[i+1] += sumOfOneDigit % 10;
    result[i] = sumOfOneDigit / 10;
  }
}

void printNumber(int s[], int len)
{
  for (int i = 0; i < len; i++)
    printf("%d", s[i]);
  printf("\n");
}

int main()
{
  char s1[MAXLEN], s2[MAXLEN];

  gets(s1);
  gets(s2);

  int n1[LEN], n2[LEN], n3[LEN + 1];

  toIntArr(s1, n1, LEN);
  toIntArr(s2, n2, LEN);

  printNumber(n1, LEN);
  printNumber(n2, LEN);

  sum(n1, n2, n3, LEN);

  printNumber(n3, LEN + 1);
}