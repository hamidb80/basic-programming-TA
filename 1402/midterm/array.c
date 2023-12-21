#include <stdio.h>
#include <string.h>

int main()
{

  // ------ defining array ------
  {
    int arr[5];

    arr[0] = 0;
    arr[1] = 6;
    arr[2] = 9;
    arr[3] = 7;
    arr[4] = 8;

    scanf("%d", &arr[0]);
  }
  // inheritable element length
  {
    int arr1[5] = {0, 6, 9, 7, 8};
    int arr2[] = {0, 6, 9, 7, 8};
  }
  {
    int a[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int b[12] = {0};
  }
  {
    float arr1[] = {0.2, 5.0, 6.3};
    char arr2[] = {'s', 'a', 'l', 'a', 'm', 0};
    char arr3[] = "salam";
  }
  // fill 0
  // 0 indexed - accessing element

  // ----- functions -----
  // strlen :: string length

  {
    // char name[100] = {'A', 'l', 'i', ..., '\0', '\0', '\0', ...};
    char name[100] = "AliReza";
    int len = strlen(name);
  }

  // strcpy :: string copy
  {
    char name1[100] = "AliReza";
    char name2[100];

    // name1 = "Salam";
    strcpy(name2, "salam");

    // name2 = name1;
    strcpy(name2, name1);
  }
  // strcmp :: string compare
  {
    char name1[100] = "AliReza";
    char name2[100] = "Bahram";

    // name1 == name2;
    //  0 -> ==
    // <0 -> <
    // >0 -> >

    printf("\n '%s' [%d] '%s'",
           name1,
           strcmp(name1, name2),
           name2);
  }

  // gets :: scanf for `string`s
  {
    getchar();
    printf("\nenter a word: ");

    char word[100];
    gets(word);
    printf("your word is '%s'", word);
  }
}