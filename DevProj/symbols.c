#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
#include <stdbool.h>


	struct symbols* sHead = NULL;
	struct symbols* sCurr = NULL;

 struct symbols* createSymbolNode(int address, char *symName)
	{
		printf("Beginning first symbol node creation...\t");
	   struct symbols* new_node = (struct symbols*)malloc(sizeof(struct symbols));
	   if(NULL == new_node)
	   {
		puts("There was a problem with the malloc function");
		return 0;
	   }
		new_node->symbolName = symName;
		new_node->symbolName = malloc(strlen(symName)+1);
		strcpy(new_node->symbolName,symName);
		
		new_node->address = address;
	
		sHead = new_node;
		sCurr = new_node;
		return sCurr;
	}

		
		
		

  struct symbols* addSymbolNode(int address,char* symbolName)
  {
		printf("Adding a new symbol...\n");
	if (sHead == NULL)
  {
	return(createSymbolNode(address, symbolName));
  }
	
	struct symbols* new_node = (struct symbols*)malloc(sizeof(struct symbols));

	if (NULL == new_node)
  {
	printf("Something in malloc went wrong");
	return NULL;
  }

	
	new_node->address = address;
	new_node->symbolName = malloc(strlen(symbolName)+1);
	strcpy(new_node->symbolName,symbolName);
	new_node->next = NULL; //this isnt necessary because there is always a null at the end?
	
	sCurr->next = new_node;
 	sCurr = new_node;
	return new_node;//check
  }

  struct symbols* symbolSearch(char* symbolName)
  {
	if(sHead == NULL)
	{
	  puts("The head node of your symbolSearch is NULL");
	  return NULL;
	}
	  
	struct symbols* ptr;
		if(symbolName == NULL)
		return NULL;

	  ptr = sHead;
	  while(ptr != NULL)
	  {
	  	 if((strcmp(ptr->symbolName,symbolName))==0)
	   	 {
			printf("\nThe SN:%s == \tOP:%s\n",ptr->symbolName,symbolName);
	        	return ptr;
	    	 }
	  	 else
		 {
		 	ptr = ptr->next;
		 }
	   }
		return NULL;//NOT FOUND
	}
	   
	
  int isThisSymbol(char* name)
  {
	struct symbols* ptr;
	if(name == NULL)
	return NULL;

	ptr = sHead;
	while(ptr != NULL)
	{
	if((strcmp(ptr->symbolName,name))==0)
	{
		return 1;
	}
	else
	 {
		ptr = ptr->next;
	 }

	}
	return 0;
	}
  

  void setAddress(struct symbols *ptr, int ad)
	{
		ptr->address = ad;
	}

  int returnAddress(char *ptr)
	{
		struct symbols* symbolPtr = sHead;
		if(symbolPtr == NULL)
		{
			puts("first node == NULL");
			return 0;
		}

	while(symbolPtr != NULL)
	{
	  if((strcmp(symbolPtr->symbolName,ptr)==0))
	  {
	   return symbolPtr->address;
	  }
	  else
	  {
		symbolPtr = symbolPtr->next;
	  }
	}
		return -1;//NOT FOUND
      }
	 //search through the nodes check the names againt each other and return the ptr or return 0

	void symbol_list(void)
	  {
	   struct symbols* ptr = sHead;
		while(ptr != NULL)
		{
		  if(ptr->address >= 0)
			printf("Symbol:%s\tAddress:%x\n",ptr->symbolName,ptr->address);
		  ptr = ptr->next;
		}
		return;
	   }
		  

  void symbolPrintList(void)
  {

	if (sHead == NULL)
  {
	puts("empty");
  }
	printf("Symbol table");
  	struct symbols* ptr;
	ptr = sHead;
	int i;
	
	while(ptr != NULL)
     {
	
	printf("\nNode[i] symbolName is:%s, value is:%x\n",i,ptr->symbolName,ptr->address);
	ptr = ptr->next;
     }
	return;
  }

  
  
	void symbolDisplay()
  {
    struct symbols *emp;
    emp=sHead;
    while(emp!=NULL)
    {
    printf("%s %x\n",emp->symbolName,emp->address);
    emp=emp->next;
    }
}
	

	
