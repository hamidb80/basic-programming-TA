#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int string_find(char *str, char look)
{
  for (int i = 0; i < strlen(str); i++)
    if (str[i] == look)
      return i;
  return -1;
}

int to_digit(char d)
{
  return d - '0';
}

float string_to_float(char *str)
{
  int noghteh_i = string_find(str, '.');

  int sahih = 0;
  for (int i = 0; i < noghteh_i; i++)
    sahih = sahih * 10 + to_digit(str[i]);

  float aashari = 0.0;
  float tens = 0.1;
  for (int i = noghteh_i + 1; i < strlen(str); i++)
  {
    aashari += to_digit(str[i]) * tens;
    tens /= 10.0;
  }
  return sahih + aashari;
}

int main()
{
  char s[100];
  gets(s);
  printf("'%s' => %f\n", s, atof(s));
  printf("'%s' => %f\n", s, string_to_float(s));
}