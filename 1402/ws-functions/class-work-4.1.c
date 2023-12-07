#include <stdio.h>

void print_morabaaa(int rows, int cols, char ch)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%c", ch);
    }
    printf("\n");
  }
}

int main()
{
  int rows, cols;
  char ch;

  scanf_s("%d*%d %c", &rows, &cols, &ch);
  print_morabaaa(rows, cols, ch);
}
