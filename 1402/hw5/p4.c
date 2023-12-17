#include <stdio.h>
#include <string.h>

void removeDuplicated(char s[], int len)
{
  int
      skipped = 0,
      table[128] = {0};

  for (int i = 0; i < len; i++)
  {
    char ch = s[i];
    table[ch] = table[ch] + 1;
    int count = table[ch];

    if (count == 1)
      s[i - skipped] = s[i];
    else
      skipped++;
  }

  s[len - skipped] = '\0';
}

int main()
{
  char s[100];

  printf("1 jomle benevis: ");
  gets(s);
  removeDuplicated(s, strlen(s));
  puts(s);
}