//these are all of my libraries
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <string.h>


  struct opcode* head = NULL; //creating a struct pointer head
  struct opcode* curr = NULL;  //creating a struct pointer current

  struct opcode* createOpcodeList(char* name, int value)
    {
	
	printf("This is the beginning of creating the first opcode, Hear me roar!!\n");
	  struct opcode *ptr = (struct opcode*)malloc(sizeof(struct opcode));
		
	
	ptr->name = name;	
	ptr->name = malloc(strlen(name)+1);
	
	strcpy(ptr->name,name);
    	ptr->value = value;
	head = ptr;
	curr = ptr;	
	return ptr;
		}
	
	

	
   struct opcode* addOpcode(char* name, int value)
	{
		printf("This is add node now working its magic...\n");
		 if(head == NULL)
		{
		return createOpcodeList(name, value);
		}
	 struct opcode *ptr2 = (struct opcode*)malloc(sizeof(struct opcode));
	
	ptr2->value = value;	
	ptr2->name = malloc(strlen(name)+1);
	strcpy(ptr2->name,name);
	
	ptr2->next = NULL;
	curr->next = ptr2;
	curr = ptr2;
	return ptr2;
 
	}
		
			


  struct opcode* searchOpcode(char* testName)
	{
	if(head == NULL){
		puts("The head is equal to NULL");
		return NULL;
		}
	if(testName == NULL){
		puts("The token is equal to NULL");
		return NULL;
		}
	struct opcode* ptr3;
			printf("\nSearching for %s token inside of opcodeTable\n",testName);
	ptr3 = head;
	while(ptr3 != NULL)
	{
		printf("We are comparing Add:%s\t&OP:%s\n",ptr3->name,testName);
		if((strcmp(ptr3->name,testName))==0)
		  {
		   	return ptr3;//FOUND
		  }
		else
		{
		ptr3 = ptr3->next;
		}
	}
	puts("\nUnsucessful search, returning you null");
	return NULL;
	}


 


     void display()
  {
    struct opcode *temp;
    temp=head;
    while(temp!=NULL)
    {
    printf("%s %x\n",temp->name,temp->value);
    temp=temp->next;
    }
  }

 	

	struct opcode* ifNull(char* name)
		{
		   if (NULL == name)
  {
	printf("Something in malloc went wrong");
	
  }return NULL;	
	}

	int returnValue(struct opcode *value)
	{
		return value->value;
	}
	
	char* returnName(struct opcode *name)
	{
		return name->name;
	}



		
	

  


  
