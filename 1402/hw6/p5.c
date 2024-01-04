#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CH 100

int searchName(char *esm, char **esmHa, int n)
{
  for (int i = 0; i < n; i++)
    if (strcmp(esm, esmHa[i]) == 0)
      return i;

  return -1;
}

int main()
{
  int n;

  printf("n: ");
  scanf("%d", &n);

  // char esmHa[100][MAX_CH];
  // int shomareHa[100];

  char **esmHa = malloc(sizeof(char *) * n);
  int *shomareHa = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++)
  {
    fflush(stdin);
    printf("~~~~~ %d ~~~~~~\n", i + 1);

    // char str[MAX_CH];
    char *str = malloc(sizeof(char) * MAX_CH);

    printf("esm: ");
    gets(str);

    esmHa[i] = str;

    printf("shomare: ");
    scanf("%d", &shomareHa[i]);

    // free(str);
  }

  char continuee = 'y';
  while (continuee == 'y')
  {
    printf("\nesm ra vared konid: ");
    fflush(stdin);
    
    char esm[MAX_CH];
    gets(esm);
    fflush(stdin);

    int index = searchName(esm, esmHa, n);

    if (index == -1)
      printf("daneshjoo vojud nadarad\n");
    else
      printf("#%d '%s' => %d\n", index + 1, esm, shomareHa[index]);

    printf("bazam? (y/n)");
    scanf("%c", &continuee);
  }
}