#include "main.h"

void print_binary(unsigned long int n){
    if (n > 1)
    {
        print_binary(n / 2);
    }

    _putchar((n % 2) + '0');
}