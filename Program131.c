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

void fun(PNODE p)
{

}
void gun(PPNODE q)
{

}

int main()
{
	PNODE first = NULL;
	// Call by value 
	fun(first); 	// Display();  Count();
	// Call by address
	gun(&first);	// InsertFirst(); InserLast();InsertAtPos();DeleteFirst();DeleteLast();DeleteAtPos();

	return 0;
}
