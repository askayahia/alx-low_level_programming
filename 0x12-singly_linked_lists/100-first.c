#include<stdio.h>

/**
 * before_main - Apply constructor attribute the executed before main()
 * Return: nothing
 */

void before_main(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
