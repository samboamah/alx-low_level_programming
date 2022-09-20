#include "main.h"
  1
  2 /**
  3  * print_rev - prints reversed string, then a new line
  4  *
  5  * @s: pointer to string to print
  6  *
  7  * Return: no return
  8 */
  9 void print_rev(char *s)
 10 {
 11         int c = 0;
 12
 13         while (s[c])
 14                 c++;
 15         while (c--)
 16                 _putchar(s[c]);
 17         _putchar('\n');
 19 }

