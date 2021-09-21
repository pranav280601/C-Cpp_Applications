/*Find out power of number taking input from user
input :x=3,y=3
Output=27(3^3)
*/

#include <stdio.h>

int DisplayPower(int a, int b)
{
	int iPow = a;

	if(a == 0)
	{
		return 0;
	}

	if(b == 0)
	{
		return 1;
	}

	for(int i = 1; i < b; i++)
	{
		iPow = iPow * a;
	}

	return  iPow; 
}

int main()
{	
	int x = 0, y = 0;
	int iRet =0;	

	printf("Enter the number:\t");
	scanf("%d",&x);

	printf("Enter the power of that number:\t");
	scanf("%d",&y);

	  
	iRet = DisplayPower(x,y);
	printf("Result is: %d\t",iRet);

	return 0;
}

																						
