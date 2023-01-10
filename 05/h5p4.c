#include <stdio.h>
#include <string.h>

int checkBefore(char s[], char ch, int index)
{
  // check whether the character `ch` is occured before `index` in string `s`

  for (int i = 0; i < index; i++)
    if (s[i] == ch)
      return 1;

  return 0;
}

void removeDupilicated(char s[], int len)
{
  int duplicated = 0;
  for (int i = 0; i < len; i++)
  {
    char ch = s[i];
    if (checkBefore(s, ch, i))
      duplicated++;
    else
      s[i - duplicated] = s[i];
  }

  s[len - duplicated] = '\0';
}

int main()
{
  char s[100];
  gets(s);
  removeDupilicated(s, strlen(s));
  puts(s);
}