/* problem on bitwise operator
wap to check whether the bit is on or not
i/p : 4
o/p : 100 */

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT,int);

int main()
{
	UINT iNo = 0;
	bool iRet = false;
	int iPos = 0;

	printf("Enter the number :\t");
	scanf("%d",&iNo);

	printf("Enter the position :\t");
	scanf("%d",&iPos);


	iRet = CheckBit(iNo,iPos);

	if(iRet == true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}

	return 0;
}

bool CheckBit(UINT iNo, int iPos)
{

	UINT iMask = 0x00000001;

	if((iPos < 1) || (iPos > 32))
	{
		printf("Incorrect position\n");
		return 0;
	}
	iMask = iMask << (iPos-1);

	UINT iRet = iNo & iMask;
	
	if(iRet == iMask)
		return true;

	else
		return false;
}
