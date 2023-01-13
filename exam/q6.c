#include <stdio.h>
#include <string.h>
#define k 30

int main()
{
  char name[30][81];
  char *ptr[81], *temp;
  // char t1;
  // temp = &t1;

  int in, out, count = 0;

  while (count < k)
  {
    printf("enter the name of number %d:", count + 1);
    gets(name[count]);
    if (!name[count][0])
      break;

    ptr[count] = name[count];
    count++;
  }

  for (out = 0; out < count; out++)
    for (in = out+1; in < count; in++)
      // if (strcmp(*(ptr + out), *(ptr + in)) > 0)
      if (strcmp(ptr[out], ptr[in]) > 0)
      {
        // temp = *(ptr + in);
        temp = ptr[in];
        // *(ptr + in) = *(ptr + out);
        ptr[in] = ptr[out];
        // *(ptr + out) = temp;
        ptr[out] = temp;
      }

  printf("<<the sorted list is:>>\n");
  //printf("temp '%s'", temp);

  for (out = 0; out < count; out++)
    printf("\nname %d is: %s", out + 1, *(ptr + out));

  getchar();
  return 0;
}