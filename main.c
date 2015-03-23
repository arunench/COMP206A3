#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//Create a string for the filename
	char *filename;
	char *line;
	//Create an int to read each number in the file
	int number;
	//Create a file pointer
	FILE *fp;
	struct node *test;
	//Prompt the user
	printf("PLease enter a file name\n: ");
	//Scan for the file
	scanf("%s\n", &filename);
	//Open the file in read mode
	fp = fopen(filename, "r");
	if(file!=NULL)
	{
		file=fopen(filename,"r");
		
				while ( fgets ( line, sizeof line, fp ) != NULL )
				{
					
					number = atoi(line);
					add(number);
				}
	}
	else
	{
		while(fp==NULL)
		{
			printf("Enter the name of the file\n");
			scanf("%s\n",&filename);
			//printf("%s\n",&filename);

			fp=fopen(filename,"r");
			
					while ( fgets ( line, sizeof line, fp ) != NULL )
					{
						
						number = atoi(line);
						add(number);
					}
					
		}
		fclose(fp);
	
	}

	printf("Here is the linked list with the numbers you put in:\n");
	prettyPrint(test);
	
	
	//Print the linked list
	
	printf("PLease input an additinal integer number \n");
	int deletenum;
	scanvf("%d", &deletenum);
	delete(deletenum);
	delete(75);
	prettyPrint(test);
	return 0;
}