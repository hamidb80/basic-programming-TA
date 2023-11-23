#include <stdio.h>

int main()
{
  // :::::: defining variable styles ::::::

  // way 1
  {
    int a, b, c, d;
    a = 1;
    b = 2;
  }
  // way 2
  {
    int a = 1;
    int b = 2;
    int c = 3;
  }
  // way 3
  {
    int
        a = 1,
        b = 2,
        c = 3;
  }
  // way 4
  {
    int a = 1, b = 2, c = 3;
  }

  // :::::: printf & scanf ::::::

  // printf >>> print formatted
  // scanf_s >>> scan formatted secure

  // %c character
  // %d, %i integer
  // %f float
  // %s string

  // meta characters
  // \n  next line
  // \t  tab

  printf("enter adad.character: ");

  int temp;
  char ch;
  scanf_s("%d.%c", &temp, &ch);
  printf("temp=%d ch=%c \n\n", temp, ch);

  // :::::: integer division vs float division ::::::
  printf("3/5 = %d\n", 3 / 5);
  printf("3/5 = %f\n", 3.0 / 5);
  printf("3/5 = %f\n", (float)3 / 5);
}