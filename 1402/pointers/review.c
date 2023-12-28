#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// void scanf2(char str[], int *a){

// }

char *rev(char *str)
{
  int len = strlen(str);
  char *result = malloc(sizeof(char) * (len + 1));

  for (int i = 0; i < len; i++)
    result[len - i - 1] = str[i];

  result[len] = '\0';

  return result;
}

int main()
{
  {
    int *a;
    int b[5] = {1, 2, 3, 4, 5};

    a = b;
    // <-

    int c;
    printf("enter a number: ");
    scanf("%d", &c);

    a = &c;

    // a & b
    // a * b

    printf("a = %o\n", a);
    printf("*a = %o\n", *a);

    // scanf2("%d %d", &c);
  }

  // int arr[MAX];

  // int    32 bit
  // float  32 bit
  // *      64 bit
  // char   8 bit
  {
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);
  }

  {
    char str[100];
    gets(str);

    printf("'%s' <=> '%s'", str, rev(str));
  }
}