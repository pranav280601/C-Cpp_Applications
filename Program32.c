/* Accept number of rows and number of columns from user and display below pattern.
Input=:
iRow=3,iCol=4
O/p:
* * * *
* * * *
* * * * 
*/
#include <stdio.h>

void DisplayPattern(int iNo1, int iNo2)
{
	for(int i =0; i < iNo1; i++)		 // row
	{
		for(int j = 0; j < iNo2; j++)		// column
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