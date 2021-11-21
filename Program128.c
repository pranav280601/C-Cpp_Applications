// Singly linear linked list
#include <stdlib.h>
#include <stdio.h>
struct node
{
	int Data;
	struct node*next; 	// self referential structure
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
	PNODE First = NULL;
	// struct node*First = NULL;
	NODE obj;
	return 0;
}