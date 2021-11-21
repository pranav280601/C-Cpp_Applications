//problem on string to find value of character without using ascii table

#include <stdio.h>

void DisplayAsciiTable()
{
	printf("ASCII TABLE\n");
	printf("-------------------------------------\n");

	printf("Decimal\t Character \n");
	printf("-------------------------------------\n");

	for(int i = 0; i < 128; i++)
	{
		printf("%d\t %c\n",i,i);
	}
	
	printf("-------------------------------------\n");

}

int main()
{
	DisplayAsciiTable();

	return 0;
}