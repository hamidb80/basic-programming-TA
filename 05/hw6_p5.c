#include <stdio.h>
#include <string.h>

#define size 100

int numbers[size];
char names[size][size];
int len;

void getInfo()
{
  for (int i = 0; i < len; i++)
  {
    char name[size];
    int number;

    printf("name? ");
    gets(name);
    printf("number? ");
    scanf("%d", &number);
    getchar();

    numbers[i] = number;
    strcpy(names[i], name);
  }
}

int findNumber(char *name)
{
  for (int i = 0; i < len; i++)
    if (strcmp(names[i], name) == 0)
      return numbers[i];

  return -1;
}

void printInfo(char *name, int number)
{
  if (number == -1)
    printf("not found\n");
  else
    printf(":: %s => %d\n", name, number);
}

int main()
{
  printf("how many users you wanna add? ");
  scanf("%d", &len);
  getchar();

  char name[size];

  getInfo();

  while (1)
  {
    printf("enter name? ");
    gets(name);
    printInfo(name, findNumber(name));

    printf("wanna continue? (y/n) ");
    char answer = getchar();

    if (answer != 'y')
      break;

    getchar();
  }
}