// Arunen Chellan (260636717)
// Reference: http://www.learn-c.org/en/Linked_lists
// Reference: http://www.thegeekstuff.com/2012/08/c-linked-list-example/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

int main()
{
    // Create a boolean
	int istrue = 1;
	int number;
	int deletenum;
	// String for filename and input
	char answer[75];
	char file[200];

	// Create a file pointer
	FILE *fp;


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
		start->val = number;
		start->next = NULL;
		pointer = start;
	}
	//Scan the file and add all of the numbers
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
    // If the user inputs yes in any of the following forms, repeat the loop
		if ((strcmp("yes", answer) == 0) || (strcmp("Yes", answer) == 0) || (strcmp("y", answer) == 0) || (strcmp("Y", answer) == 0))
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
