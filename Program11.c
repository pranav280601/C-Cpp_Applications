/*wap to break a number & display its addition  by using while loop
input21
output:2+1=3
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
	printf("Addition is : %d",iRet);	
	return 0;
}

int Display(int iNum)
{
	int iRet = 0;
	int iSum = 0;

	while(iNum>=1)			
	{
		iRet = iNum%10;
		iSum = iSum + iRet;
		iNum = iNum/10;
	}

	return iSum;
}


