// problems on n numbers

#include <stdio.h>

int Addition(int brr[])
{
	int iCnt=0, iSum=0;
	for(iCnt=0;iCnt<5;iCnt++)	
	{
		iSum = iSum + brr[iCnt];
	}
	return iSum;
}


int main()
{	
	int Arr[5];
	int iSum = 0;
	int iCnt=0,iRet=0;
	
	printf("Enter numbers");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
 		scanf("%d",&Arr[iCnt]);
	}

	iRet=Addition(Arr);
	printf("Addition is:%d\n",iRet);
	return 0;
}