#include "stdio.h"
#define header

struct node
{
	int head;
	struct node* tail;
}*first, *point;

struct node* first;
struct node* point;

void add(int);

void prettyPrint();

int delete(int);