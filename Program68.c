//check whether entered input is capital convert it into small

#include <stdio.h>
#include <stdbool.h>

char CheckCapital(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return (ch+32);
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