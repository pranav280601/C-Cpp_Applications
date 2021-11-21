/*
Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 3
Output :
* * *
* * *
* * *
* * *
*/

#include <stdio.h>

void DisplayPattern(int iNo1, int iNo2)
{
	for(int i = 1; i <= iNo1; i++)
	{
		for(int j = 1; j<= iNo2; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}

}


int main()
{
	int iRow = 0, iColumn = 0;
	
	printf("Enter number of rows:\t");
	scanf("%d",&iRow);
	
	printf("Enter the columns:\t");
	scanf("%d",&iColumn);

	DisplayPattern(iRow, iColumn);


	return 0;
}