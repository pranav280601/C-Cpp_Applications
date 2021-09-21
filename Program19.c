/*wap to take negative number & show reverse in negative mo. without using updater by using while loop
input:-213
output-312
*/


#include <stdio.h>

int Reverse(int ino)
{
	int iDigit = 0, iRev = 0;

	while(ino != 0)
	{
		iDigit = ino%10;

		iRev = ((iRev*10) + iDigit);

		ino/=10;
	}

	return iRev;
}

int main()
{
	int iNum = 0,  iRet = 0;

	printf("Enter the number:\n");
	scanf("%d",&iNum);

	iRet  = Reverse(iNum);
	printf("Reverse number is : %d\t",iRet);


	return  0;
}
