#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 *
 * Description - using the main function
 * this program prints the size of various types on the computer it is compiled and run on
 * Return : 0
*/
int main (void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf ("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n"), sizeof(i);
	printf("Size of a long int: %ld byte(s)\n"), sizeof(li);
	printf("Size of a long long int: %ld byte(s)\n"), sizeof(lli);
	printf("Size of a float: %ld byte(s)\n"), sizeof(f);
}
