//check whether entered input is small convert it into capital

#include <stdio.h>
#include <stdbool.h>

char CheckCapital(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
	{
		return (ch-32);
	}

	else
	{
		return ch;
	}

}

int main()
{
	char ch = '\0';
	char iRet = '\0';

	printf("Enter the character :\t");
	scanf("%c",&ch);

	iRet = CheckCapital(ch);

	printf("Coverted oputput is: %c\n",iRet);

	return 0;
}