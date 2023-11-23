#include <stdio.h>
#include <math.h>

// HW 4 - P 10
void countdown(int az, int ta)
{
  printf("%d ", az);

  if (az != ta)
    countdown(az - 1, ta);
}

// HW 4 P 11
int fibonacci(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// HW 4 - P 13
float miangin(float a, float b, float c)
{
  return (a + b + c) / 3.0;
}

// HW 4 - P 17
void printStar(int i, int j)
{
  for (int n = 1; n < i; n++)
    printf(" ");

  for (int n = i; n <= j; n++)
    printf("*");
}

// HW.4 P.19 & CW.4 P.2
float powerPositive(float d, int n)
{
  if (n == 0)
    return 1.0;
  else
    return d * powerPositive(d, n - 1);
}

float power(float d, int n)
{
  if (n >= 0)
    return powerPositive(d, n);
  else
    return 1.0 / power(d, -n);
}

// CW 4 - P 1
void solveQuadratic(float a, float b, float c)
{
  float delta2 = (b * b) - (4 * a * c);

  if (delta2 < 0)
    printf("no answer");

  else if (delta2 == 0)
    printf("%f", -b / (2 * a));
  else
  {
    float
        delta = sqrt(delta2),
        ans1 = (-b + delta) / (2 * a),
        ans2 = (-b - delta) / (2 * a);

    printf("%f %f", ans1, ans2);
  }
}

// base 10 to 2
// help: https://unari.ir/%D8%AA%D8%A8%D8%AF%DB%8C%D9%84-%D9%85%D8%A8%D9%86%D8%A7%DB%8C-10-%D8%A8%D9%87-2-%D9%88-%D8%A8%D8%A7%D9%84%D8%B9%DA%A9%D8%B3-%D8%A8%D9%87-%D9%87%D9%85%D8%B1%D8%A7%D9%87-%D9%85%D8%AB%D8%A7%D9%84-%D9%88/
void from10to2(int x)
{
  if (x == 1)
    printf("1");
  else
  {
    int r = x % 2;
    from10to2(x / 2);
    printf("%d", r);
  }
}

int main()
{
  printf("countdown from 5 to 1: ");
  countdown(5, 1);

  printf("\n\n");
  printf("enter x1 x2 x3: ");
  float x1, x2, x3;
  scanf("%f %f %f", &x1, &x2, &x3);
  printf("miangin= %f", miangin(x1, x2, x3));

  printf("\n\n");
  printf("enter i j: ");
  int i, j;
  scanf("%d %d", &i, &j);
  printStar(i, j);

  printf("\n\n power");
  printf("\n%f^%d=%f\n", 3.0, 4, power(3.0, 4));
  printf("\n%f^%d=%f\n", 1.5, 2, power(1.5, 2));
  printf("\n%f^%d=%f\n", 3.0, -2, power(3, -2));

  printf("\n\n");
  printf("\n\n answers of quadratic:");
  printf("%fx2 + %fx + %f\n", 1.0, 1.0, -6.0);
  solveQuadratic(1.0, 1.0, -6.0); // (x+3)(x-2)
  printf("%fx2 + %fx + %f\n", 1.0, 2.0, 1.0);
  solveQuadratic(1.0, 2.0, 1.0); // (x+1)^2

  printf("\n\n");
  printf("binary of %d = ", 87);
  from10to2(87);

  printf("\n\n");
  printf("fib(%d)=%d\n", 0, fibonacci(0));
  printf("fib(%d)=%d\n", 1, fibonacci(1));
  printf("fib(%d)=%d\n", 2, fibonacci(2));
  printf("fib(%d)=%d\n", 3, fibonacci(3));
  printf("fib(%d)=%d\n", 4, fibonacci(4));
  printf("fib(%d)=%d\n", 5, fibonacci(5));
  printf("fib(%d)=%d\n", 6, fibonacci(6));
  printf("fib(%d)=%d\n", 7, fibonacci(7));
  printf("fib(%d)=%d\n", 8, fibonacci(8));
  printf("fib(%d)=%d\n", 9, fibonacci(9));
}
