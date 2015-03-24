#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

int main()
{
	// Create a boolean
	int istrue = 1;	
	// String for filename and input
	char *input;	
	char *filename
	// Create a file pointer
	FILE *fp;	
	int number;
	int deletenb;		

	while (istrue)
	{
		// Ask the user to enter a filename, and open it in read mode
		// Keep asking until the user inputs a valid filename
		printf("Please enter a filename or path");
		scanf("%s", filename);
		fp = fopen(filename, "r");
		if (fp != NULL)
		{
			istrue = 0;	
		}
		else
		{
			printf("The filename is not valid\n");	
		}
	}	
	
