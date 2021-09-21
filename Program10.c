/*wap to break a number & display it
input:7521
output:
1
2
5
7
*/

#include <stdio.h>

void Display();

int main()
{
	Display();
	return 0;
}

void Display()
{
	int iRet = 0;
	int iNo = 7651;

	while(iNo!=0)			
	{
		iRet = iNo%10;
		printf("%d\t",iRet);
		iNo = iNo/10;
	}
}


