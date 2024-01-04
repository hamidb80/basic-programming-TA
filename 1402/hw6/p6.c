#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char *rev(char str[])
char *rev(char *str)
{
  int len = strlen(str);
  // char result[len+1];
  char *result = malloc(sizeof(char) * (len + 1));

  for (int i = 0; i < len; i++)
  {
    int j = len - 1 - i;
    result[j] = str[i];
  }

  result[len] = '\0';
  return result;
}

int main()
{
  char str[100];
  // char *str = malloc(sizeof(char) * );

  gets(str);
  printf("'%s' <=> '%s'", str, rev(str));
}