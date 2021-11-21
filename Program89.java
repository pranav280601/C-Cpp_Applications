/*
WAP to check if number is Armstrong or not
Input:153
Output:1^3+5^3+3^3=153
Input:1634
Output:1^4+6^4+3^4+4^4=1634
*/

import java.util.Scanner;

class Program89
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iNo = 0;
		int length =0;
		Boolean cRet = false;

		System.out.println("Enter the number:");
		iNo = sobj.nextInt();

		CheckArmstrong aobj = new CheckArmstrong();
		cRet = aobj.Check(iNo);

		if(cRet == true)
		{
			System.out.println("Number is Armstrong");
		}
		else
		{
			System.out.println("Number is Not Armstrong");
		}
	}
}


class CheckArmstrong
{
	public int iDigit;
	public int iSum;
	public int iNum;
	public int temp,iCount;


	CheckArmstrong()
	{
		iDigit = 0;
		iSum = 0;
		iNum =1;
		temp = 0;
		iCount = 0;
	}

	public Boolean Check(int iNo)
	{
		temp = iNo;

		if(iNo < 0)
		{
			iNo = -iNo;
		}

		while(temp != 0)
		{
			iCount++;
			temp = temp/10;
		}

		temp = iNo;
	
		while(temp != 0)
		{

			iDigit = temp%10;
			iNum = 1;
			for(int i = 1; i <= iCount; i++)
			{
				iNum = iDigit * iNum;
			}
			iSum = iSum + iNum;
			iNum = 1;
			temp = temp/10;
		}
		
		if(iSum == iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}