/* problem omn bitwise operator
wap to check whether 7th & 12th bit is on or not
i/p : 4
o/p : 100 */

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT);

int main()
{
	
	UINT iNo = 0;
	bool bRet = false;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	bRet = CheckBit(iNo);
	if(bRet == true)
	{
		printf("Bit is On\n");
	}

	else
	{
		printf("Bit is OFF\n");
	}
	return 0;
}

bool CheckBit(UINT iNo)
{
	// 0000 0000 0000 0000 0000 1000 0100 0000			7th & 12th bit 	
	//   0    0    0    0    0    8    4    0

	UINT iMask = 0x00000840;
	UINT iRet = iNo&iMask;
	if(iRet == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}