
///////////////////////////////////////////////////////
/// 
/// Function Name :  Division
/// Parameters    :	 Two Integer
/// Return Value  :  Float 
/// Description   :	 It is used to Divide two number 
/// Author        :	 Pranav Nandurkar
/// Date          :  08-September-2021
/// 
///////////////////////////////////////////////////////



#include "Header.h"				// Header file inclusion

float iRet = 0;

float Division(int iNo1,int iNo2)
{
	if(iNo2 == 0)                            // Input validation
    {
        return 0.0;
    }

	iRet = (float)iNo1/(float)iNo2;
	return iRet;
}


