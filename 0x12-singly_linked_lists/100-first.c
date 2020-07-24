#include "lists.h"

void startup(void) __attribute__((constructor));

/**
 * startup - prints string before main function is called.
 */

void startup(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
