/*program on strings 
 Input:Hello
 Output:Small letters in the string are :4

*/

#include <stdio.h>

typedef unsigned int UINT;

UINT DisplayCount(char*Brr)
{
	int iCount = 0;
	if(Brr == NULL)
	{
		return 0;
	}
	while(*Brr != '\0')
	{
		if((*Brr >= 'a') && (*Brr <= 'z'))
		{
			iCount++;
		}
		Brr++;
	}
	return iCount;
}
	

int main()
{
	char Arr[100];
	int iRet = 0;

	printf("Enter the string:\t");
	scanf("%[^'\n']s",&Arr);

	iRet = DisplayCount(Arr);

	printf("Small letters in string are : %d\n",iRet);

	return 0;
}
