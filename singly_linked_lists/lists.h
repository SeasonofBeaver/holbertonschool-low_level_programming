#ifndef main_h
#define main_h

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node *nodePtr;

struct node {
	char *string;
	int length;
	nodePtr next;
} list_t;

int _putchar(char a);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif /* main_h */
