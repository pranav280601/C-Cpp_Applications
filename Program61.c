// problem on string by using our own strlen function

#include <stdio.h>
typedef unsigned int UINT;

UINT strlenX(char*brr)
{
	int iCount = 0;

	if(brr == NULL)
	{
		return 0;
	}

	while(*brr!='\0')
	{
		iCount++;
		brr++;
	}

	return iCount;

}

int main()
{
	char Arr[200];
	int iRet = 0;

	printf("Enter the string :");
	scanf("%[^'\n']s",&Arr);

	iRet = strlenX(Arr);
	printf("String length :%d",iRet);

	return 0;
}