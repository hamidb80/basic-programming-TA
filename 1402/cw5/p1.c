#include <stdio.h>
#include <string.h>

#define MAX 100

int countChar(char s[], char ch)
{
  int
      len = strlen(s),
      count = 0;

  for (int i = 0; i < len; i++)
    if (s[i] == ch)
      count++;

  return count;
}

int findIndex(char s[], char ch)
{
  int len = strlen(s);

  for (int i = 0; i < len; i++)
    if (s[i] == ch)
      return i;
}

int copy_sliced_to(char buf[], int head, int tail, char dest[])
{
  for (int i = 0; i <= tail - head; i++)
    dest[i] = buf[head + i];
}

int main()
{
  char
      buf[MAX] = {0},
      word1[MAX] = {0},
      word2[MAX] = {0};

  gets(buf);

  int spaces = countChar(buf, ' ');

  if (spaces == 1)
  {
    int
        size = strlen(buf),
        i = findIndex(buf, ' '),
        size1 = i,
        size2 = size - i - 1;

    copy_sliced_to(buf, 0, i - 1, word1);
    copy_sliced_to(buf, i + 1, size - 1, word2);

    // printf("word1: '%s'\n", word1);
    // printf("word2: '%s'\n", word2);

    if (size1 == size2)
    {
      if (strcmp(word1, word2) == 0)
        printf("words are the same!\n");
      else
        printf("words differ in some characers\n");
    }
    else
      printf("words have different lengthes\n");
  }
  else
    printf("where must be 2 words\n");
}
