// Arunen Chellan (260636717)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

int main()
{
    // Create a boolean
	int istrue = 1;
	// String for filename and input
	char answer[75];
	char file[200];

	// Create a file pointer
	FILE *fp;
	int number;
	int deletenum;

	while (istrue)
        {
            // Ask the user to enter a filename, and open it in read mode
		// Keep asking until the user inputs a valid filename
		printf("Enter a filename or path: ");
		scanf("%s", file);
		fp = fopen(file, "r");
		if (fp != NULL)
		{
			istrue = 0;
		}
		else
		{
			printf("The filename you entered does not work\n");
		}
	}
	start = (struct node*) malloc (sizeof(struct node));
	if (fscanf(fp, "%d", &number) > 0)
	{
		start->head = number;
		start->tail = NULL;
		pointer = start;
	}
	while (fscanf(fp, "%d", &number) == 1)
    {

         add(number);
    }

	prettyPrint();

    istrue= 1;

	while(istrue)
        {
        // Ask the user to input a number they want to delete
		//	Keep asking until user says no
		printf("Enter an integer number: ");
		scanf("%d", &deletenum);
		delete(deletenum);

        printf("Here is the list after deleting the number: ");
		prettyPrint();

		printf("Delete another number ? ");
		scanf("%s", answer);

		if ((strcmp("y", answer) == 0))
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
