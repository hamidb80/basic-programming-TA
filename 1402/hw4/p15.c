#include <stdio.h>
#include <math.h>

void quadradic_solver(float a, float b, float c)
{
  if (a == 0)
  {
    printf("error a == 0");
  }
  else
  {
    float delta = b * b - 4 * a * c;

    if (delta >= 0)
    {
      // sqrt :: square root :: ریشه دوم
      float
          x1 = ((-b) + sqrt(delta)) / (2 * a), 
          x2 = ((-b) - sqrt(delta)) / (2 * a);
      printf("x1 = %f, x2 = %f", x1, x2);
    }
    else
    {
      printf("javab nadarad");
    }
  }
}

int main()
{
  float a, b, c;
  printf("a b c: ");
  scanf_s("%f %f %f", &a, &b, &c);

  quadradic_solver(a, b, c);
}