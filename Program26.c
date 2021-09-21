/*Programs on pattern printing
input:5
output:* * * * *
*/

#include <stdio.h>

void DisplayPattern(int iNo)
{
	for (int i = 0; i < iNo; ++i)
	{
		printf("*\t");
	}
}


int main()
{
	int iNum = 0;

	printf("Enter the number:\t");
	scanf("%d",&iNum);

	DisplayPattern(iNum);

	return 0;
}