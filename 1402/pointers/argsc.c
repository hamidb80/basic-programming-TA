#include <stdio.h>
#include <string.h>

int main(int len, char *vorudiHa[])
{
  // int n;
  // printf("enter a number: ");
  // scanf("%d", &n);
  printf("\n\n");

  for (int i = 0; i < len; i++)
    printf("args[%d]='%s'\n", i, vorudiHa[i]);

  printf("\n\n");
}