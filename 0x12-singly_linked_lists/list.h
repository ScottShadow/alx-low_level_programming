#ifndef MAIN_H
#define MAIN_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*libraries used*/
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/*function Prototypes*/
size_t print_list(const list_t *h);

#endif
