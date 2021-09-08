
/*
	Problem Statement - To accept a number from user and check whether the number is even or odd  
*/ 

#include "Header.h"

int main()
{
	int iValue = 0;
	BOOLEAN iRet = FALSE;

	printf("Enter a number:\t");
	scanf("%d",&iValue);

	iRet = CheckEvenOdd(iValue);

	if(iRet==TRUE)
	{
		printf("Number is Even\n");
	}
	else
	{
		printf("Number is Odd\n");	
	}


	return 0;       // Successful termination
}
