// Write a C program to find power of a number using for loop.

#include <stdio.h>
int main()
{
  int i, Number, Exponent;
  long Power = 1;
  printf("\n Please Enter any Number : ");
  scanf(" %d", &Number);
  printf("\n Please Enter the Exponent Vlaue: ");
  scanf(" %d", &Exponent);
  for(i = 1; i <= Exponent; i++)
  {
  	Power = Power * Number;
  }
  printf("\n The Final result of %d Power %d = %ld", Number, Exponent, Power);
  return 0;
}
