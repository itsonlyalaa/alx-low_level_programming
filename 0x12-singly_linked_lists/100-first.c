#include <stdio.h>

void ffirst(void) __attribute__ ((constructor));

/**
 * ffirst - prints a sentence before the main
 * function is executed
 */
void ffirst(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
