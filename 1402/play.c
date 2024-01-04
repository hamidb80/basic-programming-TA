#include <stdio.h>

int main()
{
  #define repeated_code printf("hey");
  #define if2(cond, code) if(cond){code; repeated_code;}
  #define elif2(cond, code) else if(cond){code; repeated_code;}

  if2(0, {
    printf("first branch ");
  })
  elif2(1, {
    printf("second branch.");
  })
}