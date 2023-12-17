#include <stdio.h>
#include <string.h>

int is_mirrored(char s[])
{
  for (int i = 0; i < strlen(s); i++)
  {
    int j = strlen(s) - 1 - i;

    if (s[i] != s[j])
      return 0;
  }

  return 1;
}

int main()
{
  char s[100];

  printf("1 jomle benevis: ");
  gets(s);

  printf("is %s mirrored? %d", s, is_mirrored(s));
}