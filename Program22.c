/*check whether number is perfect or not bt writing only 2 functions
input:6
output:Number is perfect
input:16
output:Number is not perfect
*/


#include <stdio.h>
#include <stdbool.h>


bool CheckPerfect(int);
	

int main()
{
	int iNum = 0;
	bool iRet = false;

	printf("Enter the number :\t");
	scanf("%d",&iNum);

	iRet = CheckPerfect(iNum);

	if(iRet == true)
	{
		printf("Number is perfect\n");
	}

	else
	{
		printf("Number is not perfect\n");
	}

	return 0;
}


bool CheckPerfect(int iNo)
{
	int i = 1;
	int iSum = 0;

	for(i = 1; i <= (iNo/2); i++)
	{
		if(iNo%i == 0)
		{
			iSum = iSum+i;
		}
	} 

	if(iSum == iNo)
	{
		return true;
	}
	else 
	{
		return false;
	}
}