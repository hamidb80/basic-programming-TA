#include <stdio.h>

int main()
{
  char ch;
  printf("harf aval rang: ");
  scanf_s("%c", &ch);


  // if(ch == 'r' || ch == 'R'){
  //   printf("red");
  // }
  // else if(ch == 'b' || ch == 'B'){
  //   printf("Blue");
  // }

  switch (ch)
  {

  case 'R':
  case 'r':
    printf("red");
    break;
  
  case 'b':
  case 'B':
    printf("blue");
    break;
  
  case 'c':
  case 'C':
    printf("cyan");
    break;
  
  case 'g':
  case 'G':
    printf("green");
    break;

  case 'y':
  case 'Y':
    printf("yellow");
    break;

  default:
    printf("xxxxxxxxx");
    break;
  }
}