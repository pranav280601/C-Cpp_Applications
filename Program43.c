// problems on n numbers

#include <stdio.h>
#include <malloc.h>


int Addition(int*brr, int iSize)
{
	int iCnt=0, iSum=0;
	for(iCnt=0;iCnt<iSize;iCnt++)	
	{
		iSum = iSum + (*brr);
	}
	return iSum;
}


int main()
{	
	int*arr = NULL;
	int iSize = 0,iRet =0;

	printf("Enter size of array\t");
	scanf("%d",&iSize);

	arr = (int*)malloc(iSize*sizeof(int));	

	for (int i = 0; i < iSize; i++)
	{
		scanf("%d",&arr[i]);
	}

	iRet = Addition(arr,iSize);
	printf("Addition is:%d\t",iRet);

	return 0;
}