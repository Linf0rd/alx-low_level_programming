#include <stdio.h>

/**
 * premain - Function executed before main.
 *
 * Description: This function is executed automatically before the main
 *		function is called.
 */

void __attribute__((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
