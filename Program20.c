/*wap and check whether that number is palindrome or not
input:-213
output-NOT PALINDROME(0)
input:-232
output-PALINDROME(1)
*/



#include <stdio.h>
#include <stdbool.h>

bool Palindrome(int ino)
{
	int iDigit = 0, iRev = 0;

	while(ino != 0)
	{
		iDigit = ino%10;

		iRev = ((iRev*10) + iDigit);

		ino/=10;
	}

	if(ino == iRev)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	int iNum = 0,  
	bool iRet = false;

	printf("Enter the number:\n");
	scanf("%d",&iNum);

	iRet  = Palindrome(iNum);

	if(iRet == true)
	{
		printf("PALINDROME\n");	
	}
	else
	{
		printf("NOT PALINDROME\n");
	}

	return  0;
}
