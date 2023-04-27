#include<stdio.h>

void theHareandTortoise(void) __attribute__ ((constructor));

/**
 * theHareandTortoise - The constructor attribute is applied to
 * theHareandTortoise() so that it is executed before main()
*/

void theHareandTortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
