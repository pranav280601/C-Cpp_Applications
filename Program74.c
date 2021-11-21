/*
	Count the number of vowel in a sring
*/

#include <stdio.h>

int CountVowel(char*str)
{
	int iCount = 0;

	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')) 
		{
			iCount++;
		}
		*str++;
	}

	return iCount;
}

int main()
{	
	char Arr[200];
	int iRet = 0;

	printf("Enter the string :\t");
	scanf("%[^'\n']s",&Arr);

	iRet = CountVowel(Arr);

	printf("Number of vowels are:\t%d",iRet);

	return 0;
}