//singly linear LinkedList using dynamic memory allocation
#include <stdlib.h>
#include <stdio.h>

struct node 
{
	int Data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
	PNODE p = NULL;
	PPNODE q = NULL;

	p = (PNODE)malloc(sizeof(NODE));
	q = &p;

	return 0;
}
