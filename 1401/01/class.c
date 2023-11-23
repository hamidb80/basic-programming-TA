#include <stdio.h>
#include <assert.h>


int max(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int p(int x, int n) // x^n
{
  int y = 1;

  for (int i = 0; i < n; i++)
  {
    y = y * x;
  }

  return y;
}

int fact(int x)
{
  int r = 1;
  for (int i = 1; i <= x; i++)
  {
    r *= i;
  }
  return r;
}

float sinp(int n, int x)
{
  return (float)(p(-1, n)) /
         fact(2 * n + 1) *
         p(x, 2 * n + 1);
}

float sin(float x)
{
  float y = 0;

  for (int n = 0; n <= 10; n++)
  {
    y += sinp(n, x);
  }

  return y;
}

int main()
{

  assert(p(27, 0) == 1);
  assert(p(2, 3) == 8);
  assert(p(3, 4) == 81);

  assert(fact(0) == 1);
  assert(fact(1) == 1);
  assert(fact(2) == 2);
  assert(fact(3) == 6);
  assert(fact(5) == 120);
  assert(fact(6) == 720);

  assert(sinp(0, 3) == 3);
  assert(sinp(1, 2) == -4 / 3);

  return 0;
}