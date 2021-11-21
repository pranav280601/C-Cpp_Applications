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
	NODE obj;
	obj.Data = 11;
	obj.next = NULL:

	PNODE p = NULL;
	//struct node*First =NULL;
	p = &obj;

	PPNODE q = NULL;
	q = &p;

	return 0;
}
