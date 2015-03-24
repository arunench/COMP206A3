// Arunen Chellan (260636717)
// Reference: http://www.learn-c.org/en/Linked_lists
// Reference: http://www.thegeekstuff.com/2012/08/c-linked-list-example/
#include "stdio.h"
#ifndef header
#define header

//Create a node structure with two attributes, a value, and a pointer to the next node
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
