
///////////////////////////////////////////////////////
/// 
/// Function Name :  DisplayFactor
/// Parameters    :	 Integer
/// Return Value  :  Intger 
/// Description   :	 It is used to Display facotrs 
/// Author        :	 Pranav Nandurkar
/// Date          :  08-September-2021
/// 
///////////////////////////////////////////////////////



#include "Header.h"				// Header file inclusion


void DisplayFactor(int iNo1)
{
		
	int iNo2 = 0;
	iNo2 = iNo1/2;
	int i = 0;

	if(iNo1==1 || iNo1 == 0)
	{
		printf("No Factors");
	}
	else
	{
		for (int i = 1; i <= iNo2; ++i)
		{
			if(iNo1%i==0)
			{
				printf("%d\n",i);
			}
		}
	}

}




//////////////////////////////////////////////
/// 
/// Time Complexity is O(N)
/// 
/// It is read as Order (Big O) of N.
/// This means the loop travels N times.
/// 
////////////////////////////////////////////
