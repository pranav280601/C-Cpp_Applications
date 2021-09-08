
///////////////////////////////////////////////////////
/// 
/// Description   :	 It is used to display series of number from given input till 1
/// Author        :	 Pranav Nandurkar
/// Date          :  08-September-2021
/// 
///////////////////////////////////////////////////////



/*
	Problem Statement - To accept a number from user and print it till 1  
*/ 



/*

Algorithm -
	
	START 


*/


#include "Header.h"

int main()
{
	int iNum = 0;
	int i = 0;

	printf("Enter a number:\t");
	scanf("%d",&iNum);

	for (int i = iNum; i > 0 ; i--)
	{
		printf("%d\n",i);
	}

	return 0;		// Successful termination
}
