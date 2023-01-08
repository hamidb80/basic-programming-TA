#include <stdio.h>
#include <string.h>

#define ASCII_Len 128

void countChars(int countTable[], char s[], int len)
{
  for (int i = 0; i < len; i++)
    countTable[s[i]]++;
}

void printCountTable(int countTable[])
{
  for (char i = 0; i < ASCII_Len - 1; i++)
    if (countTable[i] != 0)
      printf("'%c' => %d\n", i, countTable[i]);
}

int main()
{
  char s[100];
  gets(s);

  int countTable[ASCII_Len] = {0};
  countChars(countTable, s, strlen(s));
  printCountTable(countTable);
}
