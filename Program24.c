//Display table by taking input from user

#include <stdio.h>

void DisplayTable(int);

int main()
{
	int iNum = 0;

	printf("Enter the number:\t");
	scanf("%d",&iNum);

	DisplayTable(iNum);

	return 0;
}


void DisplayTable(int iNo)
{

	int i = 0;
	if(iNo==0)
	{
		return;
	}
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d\n",(iNo*i));
	}

}