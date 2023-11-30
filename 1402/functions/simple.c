#include <stdio.h>

#define NOEE_KHOROJI int
#define NOEE_1 int
#define NOEE_2 int

// pattern of defining function
// NOEE_KHOROJI ESME_TABEE(){
// NOEE_KHOROJI ESME_TABEE(NOEE_1 vorudi_1, NOEE_2 vorudi_2, ...)
// {
// }

int f(int x)
{
  return x + 1;
}

int main()
{
  int x = 5;
  printf("x = %d, f(x) = %d \n", x, f(x));
}
