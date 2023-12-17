#include <stdio.h>
#include <string.h>

int main()
{
  // ------ defining array ------

  int arr1[4];
  int arr2[4] = {9, 3, 2, 1};

  // inheritable element length
  int arr3[] = {9, 3, 2, 1};

  // define string \0
  char
      arr4[] = {'s', 'a', 'l', 'a', 'm', '\0'},
      arr5[] = "salam";

  // fill 0
  int arr6[100] = {0};

  // 0 indexed - accessing element
  arr3[0]; // #1 element
  arr3[1]; // #2 element

  // ----- functions -----

  // strlen :: string length
  {
    char sentence[100] = "salam";

    printf(
        "the length of '%s' is: %d",
        sentence,
        strlen(sentence));
  }

  printf("\n");

  // strcpy :: string copy
  {
    char word1[100];
    char word2[100] = "salam";

    // word1 = word2;

    // for (int i = 0; i < 6; i++)
    //   word1[i] = word2[i];

    strcpy(word1, word2);
    strcpy_s(word1, strlen(word2) + 1, word2); // safe

    printf("word1 is '%s' word2 is '%s'", word1, word2);
  }

  printf("\n");

  // strcat :: string concatinate
  {
    char word1[100] = "salam";
    char word2[100] = " Ali";

    strcat(word1, word2);
    // strcat_s

    printf("word1 is '%s' word2 is '%s'", word1, word2);
  }

  // strcmp :: string compare
  {
    printf("\n Ali [] ali? %d", strcmp("Ali", "ali"));
    printf("\n A: %d a: %d", 'A', 'a');
  }
}