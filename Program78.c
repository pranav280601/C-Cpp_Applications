//wap to check for palindrome

#include <stdio.h>
#include <stdbool.h>

bool palindrome(char*str)
{
	char*start = str;
	char*end = str;
	bool iRet = true;

	while(*end != '\0')
	{
		end++; 			//55
	}

	end--;

	while(start < end)
	{
		if(*end != *start)
		{
			iRet = false;
			return iRet;
		}
		start++;
		end--;
	}

	return iRet;

}


int main()
{
	char str[200];
	bool iRet = false;

	printf("Enter the string :\t");
	scanf("%[^'\n']s",&str);

	iRet = palindrome(str);

	if(iRet == true)
	{
		printf("String is palindrome\n");
	}

	else
	{
		printf("String is not palindrome\n");
	}


	return 0;
}