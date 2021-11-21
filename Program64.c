//Display Complte ASCII table

#include <stdio.h>

void DisplayAsciiTable()
{
	printf("\tASCII TABLE\n");
	printf("-------------------------------------\n");

	printf("Decimal\t HexaDecimal\t Octal\t Character\n");
	printf("-------------------------------------\n");

	for(int i = 0; i < 128; i++)
	{
		printf("%d\t  %hx\t  %o\t %c\n",i,i,i,i);
	}
	
	printf("-------------------------------------\n");

}

int main()
{
	DisplayAsciiTable();

	return 0;
}