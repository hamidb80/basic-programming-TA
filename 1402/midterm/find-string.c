#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100


int findNameIndex(char name[], char names[][MAX_STR_LEN], int len)
{
  for (int i = 0; i < len; i++)
    if (strcmp(name, names[i]) == 0)
      return i;

  return -1;
}


int main()
{
  char
      nameToFind[] = "Reza",
      names[][MAX_STR_LEN] = {
          "Ali",
          "Maryam",
          "Reza",
          "Zahra"};

  printf(
    "found '%s' in names at index of %d", 
    nameToFind, 
    findNameIndex(nameToFind, names, 4));
}