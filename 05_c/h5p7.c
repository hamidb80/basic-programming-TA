#include <stdio.h>
#include <string.h>

#define ASCII_LEN 128

void count(char s[], int freq[])
{
  int len = strlen(s);
  for (int i = 0; i < len; i++)
    if (s[i] == '.')
      break;
    else
      freq[s[i]]++;
}

void printCountTable(int freq[])
{
  for (int i = 0; i < ASCII_LEN; i++)
    if (freq[i] != 0)
      printf("'%c' => %d\n", i, freq[i]);
}

int main()
{
  char s[1000];
  int freq[ASCII_LEN] = {0};
  gets(s);
  count(s, freq);
  printCountTable(freq);
}