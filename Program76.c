//wap to swap

#include <stdio.h>

char Swap(char*ch1, char*ch2)
{
	char temp;

	temp = *ch1;
	*ch1 = *ch2;
	*ch2 = temp;
}

int main()
{
	char ch1 = '\0';
	char ch2 = '\0';

	printf("Enter first character:\t");
	scanf("%c",&ch1);


	printf("Enter second character:\t");
	scanf(" %c",&ch2);

	printf("Before swaping characters are: \t%c %c\n",ch1,ch2);

	Swap(&ch1,&ch2);			// CALL BY ADDRESS
	
	printf("After swaping characters are:\t %c  %c",ch1,ch2);

	return 0;
}