#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"



struct node *find(int number)
{
        if (first->head == number)
            {
                // If the value we want to delete is the first number, set the first to the next
                point = first->tail;
                return first;
        }
        while (first->tail->head != number && first->tail->tail != NULL)
                first = first->tail;

        if (first->tail->head != number)
        {
                return NULL;
        }
        else{
                // If the desired number is in the list, the node with that value will be returned
                return first->tail;
        }
}

void prettyPrint()
{
    //prints the list
        while (first->tail != NULL){
                printf("%d > ", first->head);
                first = first->tail;
        }
        printf("%d\n", first->head);
        first = point;

}

int delete(int number)
{
    // Delete the number from the list
        struct node *target;
        if (find(number) == NULL)
            {
                first = point;
               	printf("Your number is not in the list.\n");
		return 0;
        }
        else
        {
                target = find(number);
                first->tail = target->tail;
                first = point;
		printf("Your number was deleted successufly.\n");
                return 1;
        }
}
void add(int number)
{
	struct node *newNode, *current;
	newNode = (struct node*)malloc(sizeof(struct node));

	if(newNode == NULL){
		fprintf(stderr, "Error: cannot add another node\n");
	        exit(-1);
	}
	newNode->head = number;
	current = (struct node*) first;

	while (current->tail != NULL)
		current = current->tail;

	current->tail = newNode;
	current = newNode;
	current->tail = NULL;
}
