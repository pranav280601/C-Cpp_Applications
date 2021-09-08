
///////////////////////////////////////////////////////
/// 
/// Function Name :  DisplayFactorial
/// Parameters    :	 Integer
/// Return Value  :  Intger 
/// Description   :	 It is used to Display factorial 
/// Author        :	 Pranav Nandurkar
/// Date          :  08-September-2021
/// 
///////////////////////////////////////////////////////



#include "Header.h"				// Header file inclusion


int DisplayFactorial(int iNo1)
{
		
	static int iNum = 1;
	int i = 0;

	if(iNo1==1 || iNo1 == 0)
	{
		return iNum;
	}
	else
	{
		for (int i = iNo1; i >= 1; i--)
		{
			iNum = i * iNum;
		}

	return iNum;	
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
