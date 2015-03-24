// Arunen Chellan (260636717)
#include "stdio.h"
#ifndef header
#define header

struct node
{
	int head;
	struct node* tail;

}*start, *pointer;

struct node* start;
struct node* pointer;

void prettyPrint();

int delete(int);

void add(int);

#endif
