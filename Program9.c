/*wap to break a number & display it
input:7521
output:
1
2
5
7
*/

#include <stdio.h>

void Display(int);

int main()
{
	int iNum = 0;
	printf("Enter the number : \t");
	scanf("%d",&iNum);
	Display(iNum);
	return 0;
}

void Display(int iNo)
{
	int iRet = 0;


	while(iNo!=0)			
	{
		iRet = iNo%10;
		printf("%d\t",iRet);
		iNo = iNo/10;
	}
}


