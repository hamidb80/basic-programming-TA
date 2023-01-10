#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int isAlphabet(char ch)
{
  return (ch >= 'a' && ch <= 'z') ||
         (ch >= 'A' && ch <= 'Z');
}

void findSpaces(char s[], int spaces[])
{
  int len = strlen(s);
  int p = 1;

  for (int i = 0; i <= len; i++)
  {
    char ch = s[i];
    if (!isAlphabet(ch))
    {
      spaces[p] = i;
      p++;
    }
  }
  spaces[p] = -2;
}

void printSpaces(int spaces[])
{
  for (int i = 0;; i++)
    if (spaces[i] == -2)
      break;
    else
      printf("%d ", spaces[i]);
}

void replaceWithLove(char s[], int spaces[])
{
  for (int i = 1; spaces[i] != -2; i++)
  {
    int i1 = spaces[i - 1] + 1,
        i2 = spaces[i] - 1;

    if (i2 - i1 == 3)
      strncpy(&s[i1], "LOVE", 4);
  }
}

int main()
{
  char s[100];
  gets(s);

  int spaces[100];
  spaces[0] = -1;
  findSpaces(s, spaces);
  printSpaces(spaces);
  printf("\n");
  replaceWithLove(s, spaces);
  puts(s);
}
