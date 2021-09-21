/*Programs on pattern printing
input:3
output:* # *
*/

#include <stdio.h>


void DisplayPattern(int iNo)
{
	int iCount = 0;

	for (int i = 1; i <= iNo; i++)
	{
		if(i%2!=0)
		{
			printf("*\t");
		}
		else
		{
			printf("#\t");
		}
	}
}


int main()
{
	int iNum = 0;

	printf("Enter the number :\n");
	scanf("%d",&iNum);

	DisplayPattern(iNum);

	return 0;
}