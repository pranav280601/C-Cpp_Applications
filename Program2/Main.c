
/*
	Problem Statement - To accept two numbers from user and display its addition  
*/ 

#include "Header.h"

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	printf("Enter 1st number :\t");
	scanf("%d",&iValue1);


	printf("Enter 2nd number :\t");
	scanf("%d",&iValue2);

	iRet = Addition(iValue1,iValue2);

	printf("Addition of %d and %d is %d",iValue1,iValue2,iRet);


	return 0;
}