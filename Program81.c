#include <stdio.h>


int main()
{
	int Num = 0;

	printf("Enter the number :\t");
	scanf("%d",&Num);

	printf("HexaDecimal number format is: %x\n",Num);

	printf("Octal number format is: %o\n",Num);
	printf("Decimal number format is: %d\n",Num);

	return 0;
}