//Check whether the character is capital or not

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
	if((ch >= '0') && (ch <= '9'))
	{
		return true;
	}

	else
	{
		return false;
	}

}

int main()
{
	char ch = '\0';
	bool iRet = false;

	printf("Enter the character :\t");
	scanf("%c",&ch);

	iRet = CheckCapital(ch);

	if(iRet == true)
	{
		printf("It is a  Digit\n");
	}
	else
	{
		printf("It is not a Digit\n");
	}

	return 0;
}