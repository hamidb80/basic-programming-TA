#include <stdio.h>

int main()
{
  int
      value,
      x = 4,
      y = 2,
      fristNumber = 1,
      secondNumber = 2,
      sumOfNumber,
      number = 5,
      largest = 6,
      anInteger;

  // a
  // scanf("d", value);
  scanf("%d", &value);

  // b
  printf("the product of %d and %d is %d", x, y, x * y);

  // c
  // fristNumber + secondNumber = sumOfNumbers
  sumOfNumber = fristNumber + secondNumber;

  // d
  if (number >= largest)
    // largest == number;
    largest = number;

  // e
  // */ program to .../*
  /* program to ...*/

  // f
  // Scanf("%d", anInteger);
  scanf("%d", &anInteger);

  // g
  // printf("Reminder of %d divided by %d is \n", x, y, x % y);
  printf("Reminder of %d divided by %d is %d \n", x, y, x % y);

  // h
  // if (x=y);
  // print("%d is equalt to %d\n", x, y);
  if (x == y)
    printf("%d is equal to %d\n", x, y);

  // i
  // print("the Sum is %d\n", x + y);
  printf("the Sum is %d\n", x + y);

  // j
  // Printf("The value you entered is: %d\n", &value);
  printf("The value you entered is: %d\n", value);
}