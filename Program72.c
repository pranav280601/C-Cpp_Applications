/*program on strings 
 Input:Hello
 Output:Capital letters in the string are :1
 	 	Small letter in the sring are : 4
*/

#include <stdio.h>

void DisplayCount(char*Brr)
{
	int iSmallCount = 0;
	int iCapitalCount = 0;

	if(Brr == NULL)
	{
		printf("No string entered\n");;
	}
	while(*Brr != '\0')
	{
		if((*Brr >= 'A') && (*Brr <= 'Z'))
		{
			iSmallCount++;
		}
		else if((*Brr >= 'a') && (*Brr <= 'z'))
		{
			iCapitalCount++;
		}

		Brr++;
	}
	printf("Small letters in the string are :%d\n",iSmallCount);
   	printf("Capital letters in the string are :%d\n",iCapitalCount);
}
	

int main()
{
	char Arr[100];
	
	printf("Enter the string:\t");
	scanf("%[^'\n']s",&Arr);

	DisplayCount(Arr);

	return 0;
}
