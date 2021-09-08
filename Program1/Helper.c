
///////////////////////////////////////////////////////
/// 
/// Function Name :  CheckEvenOdd
/// Parameters    :	 Integer 
/// Return Value  :  Integer
/// Description   :	 It is used to check number is even or odd
/// Author        :	 Pranav Nandurkar
/// Date          :  08-September-2021
/// 
///////////////////////////////////////////////////////



#include "Header.h"				// Header file inclusion

BOOLEAN CheckEvenOdd(int iNo)
{
	if(iNo%2==0)
	{
		return TRUE;		// TRUE indicates number is even 
	}
	else
	{
		return FALSE;		// FALSE indicates number is odd
	}
}


