#include <stdio.h>
#include <string.h>

#define size 100

void reverse(char dest[], char src[])
{
  int len = strlen(src);

  for (int i = 0; i < len; i++)
    dest[len - 1 - i] = src[i];
}

int main()
{
  char
      s[size],
      d[size];

  gets(s);
  reverse(d, s);
  puts(d);
}