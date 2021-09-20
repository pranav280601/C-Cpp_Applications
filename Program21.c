/*check whether number is perfect or not bt writing only 3 functions
input:602
output:Number is not palindrome
input:161
output:tNumber is palindrome*/


#include <stdio.h>
#include <stdbool.h>

int Reverse(int);
bool CheckPalindrome(int);

int main()
{
	int iNum = 0;
	bool iRet = false;


	printf("Enter the number : \t");
	scanf("%d",&iNum);

	iRet = CheckPalindrome(iNum);

	if(iRet == true)
	{
		printf("PALINDROME\n");
	}
	else
	{
		printf("NOT PALINDROME\n");
	}


	return 0;
}

int Reverse(int ino)
{
	int iDigit = 0, iRev = 0;

	while(ino != 0)
	{
		iDigit = ino%10;

		iRev = ((iRev*10) + iDigit);
		ino/=10;
	}

	return iRev;
}

bool CheckPalindrome(int ium)
{
	int iRet = Reverse(ium);

	if(ium == iRet)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*

#include<stdio.h>
#include<stdbool.h>

int Reverse(int);
bool CheckPalindrome(int);

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPalindrome(iValue);
    if(bRet == true)
    {printf("Number is palindrome\n");}
    else
    {printf("Number is not palindrome\n");}
    return 0;
}
int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}
bool CheckPalindrome(int iInput)
{
    int iNumber = 0;
    iNumber = Reverse(iInput);
    if(iNumber == iInput)
    {return true;}
    else
    {return false;}
}*/