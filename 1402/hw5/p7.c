#include <stdio.h>
#include <string.h>

int main()
{
  char s[100];

  printf("1 jomle benevis: ");
  gets(s);

  int table[128] = {0};

  for (int i = 0; i < strlen(s); i++)
  {
    char ch = s[i];
    table[ch] = table[ch] + 1;
    // table[ch]++;
  }

  for (int i = 0; i < 128; i++)
  {
    int c = table[i];
    if (c != 0)
    {
      printf("'%c' => %d\n", i, c);
    }
  }
}