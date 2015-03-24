// Arunen Chellan (260636717)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"



struct node *find(int number)
{
        if (start->head == number)
            {
                // If the value we want to delete is the first number, set the first to the next
                pointer = start->tail;
                return start;
        }
        while (start->tail->head != number && start->tail->tail != NULL)
                start = start->tail;

        if (start->tail->head != number)
        {
                return NULL;
        }
        else{
                // If the desired number is in the list, the node with that value will be returned
                return start->tail;
        }
}

void prettyPrint()
{
    //prints the list
        while (start->tail != NULL){
                printf("%d > ", start->head);
                start = start->tail;
        }
        printf("%d\n", start->head);
        start = pointer;

}

int delete(int number)
{
    // Delete the number from the list
        struct node *search;
        if (find(number) == NULL)
            {
                start = pointer;
               	printf("NUMBER WAS NOT FOUND\n");
		return 0;
        }
        else
        {
                search = find(number);
                start->tail = search->tail;
                start = pointer;
		printf("NUMBER WAS DELETED\n");
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
	current = (struct node*) start;

	while (current->tail != NULL)
		current = current->tail;

	current->tail = newNode;
	current = newNode;
	current->tail = NULL;
}
