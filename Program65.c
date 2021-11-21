//Check whether the character is capital or not

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
	{
		return true;
	}

	else if((ch >= 'A') && (ch <= 'Z'))
	{
		return false;
	}

}

int main()
{
	char ch;
	bool iRet = false;

	printf("Enter the character :\t");
	scanf("%c",&ch);

	iRet = CheckCapital(ch);

	if(iRet == true)
	{
		printf("It is not capital\n");
	}
	else
	{
		printf("It is capital\n");
	}

	return 0;
}