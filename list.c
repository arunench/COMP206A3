// Arunen Chellan (260636717)
// Reference: http://www.learn-c.org/en/Linked_lists
// Reference: http://www.thegeekstuff.com/2012/08/c-linked-list-example/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"



struct node *find(int number)
{
        if (start->val == number)
            {
                // If the value we want to delete is the first number, set the first to the next
                pointer = start->next;
                return start;
        }
        while (start->next->val != number && start->next->next != NULL)
                start = start->next;

        if (start->next->val != number)
        {
                return NULL;
        }
        else{
                // If the desired number is in the list, the node with that value will be returned
                return start->next;
        }
}

void prettyPrint()
{
    //prints the list
    if(start != NULL)
        {
        while (start->next != NULL){
                printf("%d > ", start->val);
                start = start->next;
        }
        printf("%d\n", start->val);
        start = pointer;
        }
        else
        {
         printf("Error: the list is empty");
        }

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
                start->next = search->next;
                start = pointer;
		printf("NUMBER WAS DELETED\n");
                return 1;
        }
}
void add(int number)
{
    // Add a number to the list, return nothing
	struct node *newNode, *current;
	newNode = (struct node*)malloc(sizeof(struct node));

	if(newNode == NULL){
		fprintf(stderr, "Error: cannot add another node\n");
	        exit(-1);
	}
	// Make the value of the newNode equal to the desired number.
	newNode->val = number;

	current = (struct node*) start;

	while (current->next != NULL)
    {
     current = current->next;
    }

	current->next = newNode;
	current = newNode;
	current->next = NULL;
}
