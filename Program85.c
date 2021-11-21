/* problem on bitwise operator
wap to check whether first 4 bits(nibble) is on or not
i/p : 4
o/p : 100 */

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT);

int main()
{
	UINT iNo = 0;
	bool iRet = false;

	printf("Enter the number :\t");
	scanf("%d",&iNo);

	iRet = CheckBit(iNo);

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

bool CheckBit(UINT iNo)
{
	// 0000 0000 0000 0000 0000 0000 1111
	//   0    0    0    0    0    0    f

	UINT iMask = 0x0000000f;
	UINT iRet = iNo & iMask;
	
	if(iRet == iMask)
		return true;

	else
		return false;
}
