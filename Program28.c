/*Programs on pattern printing
input:5
output:2 4 6 8 10
*/

#include <stdio.h>

void DisplayPattern(int iNo)
{
	int iCout = 0;
	for(int i = 1; i <= iNo; i++)
	{
		printf("%d\t",(2*i));
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