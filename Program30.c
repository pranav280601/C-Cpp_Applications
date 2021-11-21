/*Accept number from user and display below pattern.
Input : 5
Output : A B C D E
Program Layout :*/

#include <stdio.h>

void DisplayPattern(int iNo)
{
	char ch = 'A';

	for(int i = 0; i < iNo; i++)
	{
		printf("%c\t",ch);

		ch++;
	}
}


int main()
{
	int iNum = 0;

	printf("Enter the Number :\n");
	scanf("%d",&iNum);

	DisplayPattern(iNum);





	return 0;
}