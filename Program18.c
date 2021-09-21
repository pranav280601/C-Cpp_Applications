/*wap to break a number & count odd digits from that number and add them by using while loop
input:213
output:4(1+3)
*/


#include <stdio.h>

int CountOdd(int ino)
{
	int iDigit = 0, iCount = 0;

	if(ino < 0)
	{
		ino = -ino;
	}

	while(ino != 0)
	{
		iDigit = ino%10;

		if(iDigit%2 != 0)
		{
			iCount++;
		}

		ino/=10;
	}

	return iCount;
}

int main()
{
	int iNum = 0,  iRet = 0;

	printf("Enter the number:\n");
	scanf("%d",&iNum);

	iRet  = CountOdd(iNum);
	printf("Number of odd count is : %d\t",iRet);


	return  0;
}