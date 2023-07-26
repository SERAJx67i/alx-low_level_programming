#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 IF Success.
 */
void print_alphabet(void)
{
        int a = 96;
        int b = 10;
        while (a < 122)
        {
                a++;
                putchar(a);
        }
                putchar(b);
}
