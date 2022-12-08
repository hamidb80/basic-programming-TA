#include <stdio.h>

double c2f(double c)
{
  return (c * 9 / 5) + 32;
}

int fact(int n)
{
  if (n == 1 || n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

void getmax2grade()
{

  int n = 0, max1 = 0, student1 = 0, max2 = 0, student2 = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    int grade = 0, student = 0;
    printf("%dth grade? ", i + 1);
    scanf("%d", &grade);
    printf("%dth number? ", i + 1);
    scanf("%d", &student);

    if (grade >= max1)
    {
      max2 = max1;
      student2 = student1;
      max1 = grade;
      student1 = student;
    }
    else if (grade > max2)
    {
      max2 = grade;
      student2 = student;
    }
  }

  printf("#1 = %d, #2 = %d", max1, max2);
}

void showColor()
{
  printf("write the first letter of the color: ");
  char c = getchar();

  switch (c)
  {
  case 'r':
  case 'R':
    printf("Red");
    break;

  case 'b':
  case 'B':
    printf("Blue");
    break;

  case 'g':
  case 'G':
    printf("Green");
    break;

  default:
    printf("I dont know");
    break;
  }
}

void forEquivlent()
{
  for (int i = 0; i < 10; i++)
  {
    /* code */
  }

  int i = 0;
  while (i < 10)
  {
    /* code */
    i++;
  }
}

void weekDay()
{
  printf("day of week 1..7? ");
  int day = 0;
  scanf("%d", &day);

  switch (day)
  {
  case 1:
    printf("shanbeh");
    break;
  case 2:
    printf("1shanbeh");
    break;
  case 3:
    printf("2shanbeh");
    break;
  case 4:
    printf("3shanbeh");
    break;
  case 5:
    printf("4shanbeh");
    break;
  case 6:
    printf("5shanbeh");
    break;
  case 7:
    printf("jomeh");
    break;
  default:
    printf("nadarim");
    break;
    break;
  }
}

void diff()
{
  float f1, f2;
  while (1)
  {
    printf("enter 2 double number: ");
    scanf("%f", &f1);
    scanf("%f", &f2);

    if (f1 == 0.0 && f2 == 0.0)
    {
      break;
    }

    printf("%f*%f - %f/%f = %f - %f = %f\n\n",
           f1, f2, f1, f2, f1 * f2, f1 / f2, (f1 * f2 - f1 / f2));
  }
}

double an(int n)
{
  return 1.0 / fact(n);
}

double series()
{
  double sum = 0.0;

  for (int n = 1; n < 10; n++)
    sum += an(n);

  return sum;
}

int main()
{
  // printf("%fC = %fF\n", 8.0, c2f(8.0));
  // printf("%d! = %d\n", 1, fact(1));
  // printf("%d! = %d\n", 2, fact(2));
  // printf("%d! = %d\n", 3, fact(3));
  // printf("%d! = %d\n", 4, fact(4));
  // getmax2grade();
  // showColor();
  // weekDay();
  // diff();
  printf("series = %lf", series());
}