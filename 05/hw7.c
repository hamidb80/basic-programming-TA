#include <stdio.h>

struct Month
{
  char name[20];
  int days;
  int order;
};

struct Month months[12] = {
    {"farvardin", 31, 1},
    {"ordibehesht", 31, 2},
    {"khordad", 31, 3},
    {"tir", 31, 4},
    {"mordad", 31, 5},
    {"shahrivar", 31, 6},
    {"mehr", 30, 7},
    {"aban", 30, 8},
    {"azar", 30, 9},
    {"dey", 30, 10},
    {"bahman", 30, 11},
    {"esfand", 29, 12},
};

int main()
{
  for (int i = 0; i < 12; i++)
    printf(
        "%dth month is '%s' and has (%d) days\n",
        months[i].order, months[i].name, months[i].days);
}