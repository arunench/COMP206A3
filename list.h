// Arunen Chellan (260636717)
// Reference: http://www.learn-c.org/en/Linked_lists
// Reference: http://www.thegeekstuff.com/2012/08/c-linked-list-example/
#include "stdio.h"
#ifndef header
#define header

struct node
{
	int val;
	struct node* next;

}*start, *pointer;

struct node* start;
struct node* pointer;

void prettyPrint();

int delete(int);

void add(int);

#endif
