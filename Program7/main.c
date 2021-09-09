/* 
	Problem Statement - Print * number of times the user want and write its function after the main function

*/


#include <stdio.h>
	

void Display(int iNo);

int main()
{

	int iValue = 0;
	printf("Enter the number:\t");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}

void Display(int iNo)
{
	// Updater

	if(iNo==0)
	{
		printf("You Entered 0\n");
	}

	else if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(int iCnt = 0; iCnt<iNo; iCnt++)
	{
		printf("*\t");
	}
	

}