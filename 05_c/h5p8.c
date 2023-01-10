#include <stdio.h>
#include <string.h>

int isMirror(char s[], int len)
{
  for (int i1 = 0; i1 < len; i1++)
  {
    int i2 = len - 1 - i1;

    if (s[i1] != s[i2])
      return 0;
  }

  return 1;
}

int main()
{
  char s[100];

  gets(s);

  if (isMirror(s, strlen(s)))
    printf("is mirror");
  else
    printf("isn't mirror");
}