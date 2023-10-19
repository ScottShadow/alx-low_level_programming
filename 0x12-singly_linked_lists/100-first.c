#include <stdio.h>
/**
 * printstuffbeforemain - prints a text before main
 */
void printstuffbeforemain(void) __attribute__((constructor));
void printstuffbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
