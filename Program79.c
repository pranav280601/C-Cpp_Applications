// Issue in this program

#include <stdio.h>


void DisplayBinary(int Num)
{
	int f = 0;

	while(Num != 0)
	{
		iDigit = Num%2;

		printf("%d",iDigit);
		Num= Num/2;
	}



}


int main()
{
	int Num = 0;

	printf("Enter the number :\t");
	scanf("%d",&Num);

	DisplayBinary(Num);

	return 0;
}