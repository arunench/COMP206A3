#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

int main()
{
    // Create a boolean
	int istrue = 1;
	// String for filename and input
	char file[100];
	char input[50];
	// Create a file pointer
	FILE *fp;
	int number;
	int deletenum;

	while (istrue)
        {
            // Ask the user to enter a filename, and open it in read mode
		// Keep asking until the user inputs a valid filename
		printf("Please enter a filename or path: ");
		scanf("%s", file);
		fp = fopen(file, "r");
		if (fp != NULL)
		{
			istrue = 0;
		}
		else
		{
			printf("The filename is not valid\n");
		}
	}
	first = (struct node*) malloc (sizeof(struct node));
	if (fscanf(fp, "%d", &number) > 0)
	{
		first->head = number;
		first->tail = NULL;
		point = first;
	}
	while (fscanf(fp, "%d", &number) == 1) add(number);
	prettyPrint();

    istrue= 1;
	while(istrue)
        {
        // Ask the user to input a number they want to delete
		//	Keep asking until user says no
		printf("Please enter a number: ");
		scanf("%d", &deletenum);
		delete(deletenum);
    printf("Here is the list after deleting the number");
		prettyPrint();
		printf("Delete another number ? ");
		scanf("%s", input);

		if ((strcmp("y", input) == 0))
            {
			 continue;
		}
		else
		{
			istrue = 0;
		}
	}
	return 0;
}
