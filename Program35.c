/*Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output :
* * * *
# # # #
* * * *
# # # #
*/

#include <stdio.h>

void DisplayPattern(int iRow, int iColumn)
{
	int i = 0, j =0;

	for(i =1; i <= iRow; i++)
	{
		for(j = 1; j <= iColumn; j++)
		{
			if(i%2==0)
			{
				printf("#\t");
			}

			else if(i%2!=0)
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



