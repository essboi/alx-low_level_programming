#include<stdio.h>

/**
 * theHareandTortoise - Apply the constructor attribute to myStartupFun()
 * so that it is executed before main()
 * void theHareandTortoise(void) __attribute__ ((constructor));
 * theHareandTortoise - implementation of theHareandTortoise
 */

void theHareandTortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
