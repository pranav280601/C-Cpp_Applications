/*wap to break a number & reverse them by using while loop
input:213
output312
*/

/*
#include <stdio.h> 

void Display(int);

int main()
{
    int iValue=0;
   
   	printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

   	return 0;
}

void Display(int iNo)
{
	int iRet = 0;

	while(iNo != 0)
	{
		iRet = iNo%10;
		printf("%d",iRet);
		iNo/=10;
	}
}*/



#include <stdio.h> 

int Reverse(int);

int main()
{
    int iValue=0 ,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=Reverse(iValue);
    printf("Reverse number is:%d\n", iRet);
    return 0;
}

int Reverse(int iNo)
{
	int iDigit=0, iRev = 0;

	if(iNo < 0)
		{
			iNo = -iNo;
		}

	while(iNo != 0)
	{								
		iDigit = iNo %10;	
		iRev =((iRev*10)+iDigit);
		iNo/=10;				
	}	
 	return iRev;
}	
 
