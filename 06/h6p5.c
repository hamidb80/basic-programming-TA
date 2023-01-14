#include <stdio.h>
#include <string.h>

int len;
int numbers[1000];
char names[1000][265];

int search(char name[])
{
  for (int i = 0; i < len; i++)
    if (strcmp(name, names[i]) == 0)
      return numbers[i];

  return -1;
}

void printContact(char name[], int number)
{
  printf("'%s' => %d\n", name, number);
}

void getContacts()
{
  for (int i = 0; i < len; i++)
  {
    char name[256];
    int number;

    printf("name? ");
    gets(name);
    printf("number? +");
    scanf("%d", &number);
    getchar();

    numbers[i] = number;
    strcpy(names[i], name);
  }
}

void debugContants(){
  for (int i = 0; i < len; i++)
    printContact(names[i], numbers[i]);
}

int main()
{
  printf("how many contacts? ");
  scanf("%d", &len);
  getchar();

  getContacts();
  debugContants();

  while (1)
  {
    printf("enter a name to search: ");

    char name[265];
    gets(name);

    int number = search(name);
    printContact(name, number);

    printf("wanna continue?[y/n] ");
    char answer = getchar();
    if (answer == 'n')
      break;
    getchar();
  }
}