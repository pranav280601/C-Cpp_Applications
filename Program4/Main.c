
/*
	Problem Statement - To accept two numbers from user and display its Division 
*/ 

/*
	Algorithm - 

		START 

			Accept 1st number as No1
			Accept 2nd number as No2
			Create a variable as ans
			Perform division on No1 and No2 and store it in ans
			Display ans

		STOP	

*/




#include "Header.h"

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	float iAns= 0;

	printf("Enter 1st number :\t");
	scanf("%d",&iNo1);


	printf("Enter 2nd number :\t");
	scanf("%d",&iNo2);

	iAns = Division(iNo1,iNo2);

	printf("Division of %d and %d is %.2f",iNo1,iNo2,iAns);


	return 0;
}