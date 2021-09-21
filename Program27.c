/*Programs on pattern printing
input:5
output:1* 2* 3* 4* 5*
*/

#include <stdio.h>

void DisplayPattern(int iNo)
{
	for (int i = 1; i <= iNo; ++i)
	{
		printf("%d*\t",i);
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