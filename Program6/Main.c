
/*
	Problem Statement - To accept a number from user and display its Factorial Representation
*/ 

/*
	Algorithm - 

		START 

			Accept a number from user as iNo1
			Declare a varialbe to store the factorial
			Declare another variable as iNum and initialise it to 1
			Iterate a loop untill iNo1 becomes 1
				Multiply iNo1 with iNum
				Decrement iNo1
				iterate until iNo1 == 1
			Display Factorial

		STOP	

*/




#include "Header.h"

int main()
{
	int iNo1 = 0;
	int iRet = 1;

	printf("Enter number :\t");
	scanf("%d",&iNo1);


	iRet = DisplayFactorial(iNo1);
	printf("Factorial is: %d\t",iRet);

	return 0;
}