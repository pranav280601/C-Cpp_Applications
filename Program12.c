/*wap to break a number & display total number of digits by using while loop
input21
output:21= 2(digits)
*/

#include <stdio.h>

int Display(int);

int main()
{
	int iNo = 0;
	int iRet = 0;
	printf("Enter the number :\t");
	scanf("%d",&iNo);

	iRet = Display(iNo);
	printf("Total Number of digits are :%d",iRet);
		
	return 0;
}

int Display(int iNum)
{
	int iSum = 0;
	if(iNum == 0)
	{
		return 1;
	}

	while(iNum>=1)
	{
		iSum++;
		iNum = iNum/10;
	}


	return iSum;
}


