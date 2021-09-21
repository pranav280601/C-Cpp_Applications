/*wap to break a number & reverse them by using while loop
input:123
output321
*/

#include <stdio.h>

int Reverse(int);

int main()
{
	int iNum = 0;
	int iRet = 0;
	printf("Enter the number :\t");
	scanf("%d",&iNum);

	iRet = Reverse(iNum);
	printf("Reverse number is : \t",iRet);

	return 0;
}


int Reverse(int iNo)
{
	int iDigit = 0;
	int iRev = 0;

	// Updater

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;

		iRev = ((iRev*10) + iDigit);

		iNo/=10;

	}			
	return iRev;																						
}