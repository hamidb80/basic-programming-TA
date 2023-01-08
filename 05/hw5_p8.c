#include <stdio.h>
#include <string.h>

int isMirror(char s[], int len)
{
  for (int i = 0; i < len - 1; i++)
    if (s[i] != s[len - 1 - i])
      return 0;

  return 1;
}

int main()
{
  char s[100];
  gets(s);

  if (isMirror(s, strlen(s)))
    printf("yes");
  else
    printf("no");
}