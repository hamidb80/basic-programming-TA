#include <stdio.h>
#include <string.h>

#define N 7

// "0123456789";
int toDigit(char ch)
{
  return ch - '0';
}

void strToDigits(char str[], int digits[])
{
  int len = strlen(str);
  for (int i = 0; i < len; i++)
    digits[N-1-i] = toDigit(str[len-1-i]);
}

void printNumber(int digits[]){
  for (int i = 0; i < N; i++)
    printf("%d", digits[i]);
}

void sum(int number1[], int number2[], int result[]){
  int r = 0;

  for (int i = N - 1; i >= 0; i--)
  {
    int s = number1[i] + number2[i] + r;
    result[i] = s % 10;
    r = s / 10;
  }
}

int main()
{
  char 
    a[100],
    b[100];

  gets(a);
  gets(b);

  int 
    number1[N] = {0},
    number2[N] = {0},
    number3[N] = {0};

  strToDigits(a, number1);
  strToDigits(b, number2);

  printf("\n");
  printNumber(number1);
  printf("\n+++++\n");
  printNumber(number2);
  printf("\n=====\n");

  sum(number1, number2, number3);
  printNumber(number3);
}