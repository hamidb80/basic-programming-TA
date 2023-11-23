#include <stdio.h>
#include <string.h>

void reverse(char src[], char dest[], int len)
{
  for (int i1 = 0; i1 < len; i1++)
  {
    int i2 = len - 1 - i1;
    dest[i2] = src[i1];
  }
}

int main()
{
  char
      s[100] = {0},
      d[100] = {0};

  gets(s);
  reverse(s, d, strlen(s));
  puts(d);
}