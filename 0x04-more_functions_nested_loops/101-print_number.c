#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
  long num;
  int is_negative;
  int digit;

  num = n;
  is_negative = num < 0;

  if (is_negative)
    _putchar('-');

  do {
    digit = num % 10;
    _putchar(digit + '0');
    num /= 10;
  } while (num);
}

