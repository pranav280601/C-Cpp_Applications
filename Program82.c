/* problem omn bitwise operator
wap to check whether 4th bit is on or not
i/p : 4
o/p : 100 */

#include <stdio.h>
#include <stdbool.h>

bool CheckBit(int);

int main()
{
	
	int iNo = 0;
	bool bRet = false;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	bRet = CheckBit(iNo);
	if(bRet == true)
	{
		printf("4th Bit is On\n");
	}

	else
	{
		printf("Bit is OFF\n");
	}
	return 0;
}

bool CheckBit(int iNo)
{
	// 0000 0000 0000 0000 0000 0000 0000 1000			4th bit 	
	//   0    0    0    0    0    0    0    8

	int iMask = 0x00000008;
	int iRet = iNo & iMask;

	if(iRet == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}