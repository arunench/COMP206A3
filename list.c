#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"


struct node *find(int number){		

        if (first->head == number)
        {		
            // If the value we want to delete is the first number, set the first to the next
                point = first->tail;	
                return first;		
        }
        while (first->tail->head != number && first->tail->tail != NULL)	
             { 
                first = first->tail;					
                }
        if (first->tail->head != number)
        {		
                return NULL;			
        }
        else
        {
                // If the desired number is in the list, the node with that value will be returned
                return first->tail;	
        }
}

int delete(int number)
        {

        //Create a temporary node
        struct node *temp; 
        // If the number was not in the list   
        if (find(number) == NULL)
        {  
            
                first = point;  
                printf("Your number is not in the list.\n");

        return 0;   
        }
        else
        {
                temp = find(number);  //find temp node with value of number
                first->tail = temp->tail; //attach first->tail to the next tail
                first = point;  //reset iterator
                printf("Your number was deleted successufly.\n");
                return 1;
        }





void add(int number)
{

    struct node *newNode;
    struct node *current;
    newNode = (struct node*)malloc(sizeof(struct node));    
    if(newNode == NULL){
        fprintf(stderr, "Error: cannot add another node\n");    
            exit(-1);
    }
    newNode->head = number; 
    current = (struct node*) first; 
    while (current->tail != NULL)   
       { 
        current = current->tail;
        }
    current->tail = newNode;    
    current = newNode;      
    current->tail = NULL;       
}
}
