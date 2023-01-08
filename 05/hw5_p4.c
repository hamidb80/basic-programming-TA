#include <stdio.h>
#include <string.h>

void removeDuplicated(char s[], int len)
{
  int isSeen[128] = {0};
  int duplicated = 0;

  for (int i = 0; i < len; i++)
  {
    if (isSeen[s[i]] == 0)
    {
      isSeen[s[i]] = 1;
      s[i - duplicated] = s[i];
    }
    else
    {
      duplicated++;
    }
  }

  s[len - duplicated] = '\0';
}

int main()
{
  char input[100];
  gets(input);
  removeDuplicated(input, strlen(input));
  printf("'%s'", input);
}