#include <stdio.h>

void update(float *max1, float *max2, float new)
{
  if (new > (*max1))
  {
    *max2 = (*max1);
    *max1 = new;
  }
  else if (new > (*max2))
  {
    *max2 = new;
  }
}

int main()
{
  float max1 = 0.0;
  float max2 = 0.0;
  float new = 0.0;

  int studentNo;
  printf_s("number? \n");
  scanf("%d", &studentNo);

  for (int i = 0; i < studentNo; i++)
  {
    printf_s("grade of %dst? ", i + 1);
    scanf("%f", &new);
    update(&max1, &max2, new);
  }

  printf("\n\n#2: %f", max2);
}