
/*
	Problem Statement - To accept a number from user and display its Factors 
*/ 

/*
	Algorithm - 

		START 

			Accept a number from user as No1
			Create a variable which stores half the value of No1 as No2
			Iterate a loop from 1 to No2
				if No1 is divisible by the number
				return number
			Display factors

		STOP	

*/




#include "Header.h"

int main()
{
	int iNo1 = 0;
	
	printf("Enter number :\t");
	scanf("%d",&iNo1);


	DisplayFactor(iNo1);

	return 0;
}