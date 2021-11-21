/*Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output :
$ * *
*  $ *
* *  $

*/


#include <stdio.h>

void DisplayPattern(int iRow, int iColumn)
{
	for(int i = 0; i < iRow; i++)
	{
		for(int j = 0; j < iColumn; j++)
		{
			if(i == j)
			{
				printf("$\t");
			}
			else
			{
				printf("*\t");
			}
		}

		printf("\n");
	}
}


int main()
{
	int iRow =0, iColumn = 0;

	printf("Enter the number of rows: \t");
	scanf("%d",&iRow);

	printf("Enter the number of columns: \t");
	scanf("%d",&iColumn);

	DisplayPattern(iRow, iColumn);


	return 0;
}