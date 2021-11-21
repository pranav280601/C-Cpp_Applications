// problems on n numbers

#include <stdio.h>

int main()
{	
	int Arr[5];
	int iSum = 0;
	for(int i = 0; i < 5; i++)
	{
		scanf("%d",&Arr[i]);
	}

	iSum = iSum + Arr[0];
	iSum = iSum + Arr[1];
	iSum = iSum + Arr[2];
	iSum = iSum + Arr[3];
	iSum = iSum + Arr[4];
	
	printf("Addition is: %d",iSum);

	return 0;
}