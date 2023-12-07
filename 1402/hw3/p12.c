#include <stdio.h>

int main()
{
  int n;
  printf("n: ");
  scanf_s("%d", &n);

  switch (n)
  {
  case 1:
    printf("shanbe");
    break;

  case 2:
    printf("1 shanbe");
    break;
  
  case 3:
    printf("2 shanbe");
    break;
  
  case 4:
    printf("3 shanbe");
    break;
  
  case 5:
    printf("4 shanbe");
    break;

  case 6:
    printf("5 shanbe");
    break;
  
  case 7:
    printf("jomee");
    break;

  default:
    printf("nadarim");
    break;
  }
}