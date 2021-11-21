import java.lang.*;
import java.util.Scanner;


class Program88
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNo = 0;
		Boolean bRet = false;

		System.out.println("Enter the number :");
		iNo = sobj.nextInt();

		CheckPrime cobj = new CheckPrime();

		bRet = cobj.Check(iNo);

		if(bRet == true)
		{
			System.out.println("Number is Prime");
		}
		else
		{
			System.out.println("Number is Not Prime");
		}

	}
}

class CheckPrime
{
	public int i;
	CheckPrime()
	{
		i = 0;
	}

	public Boolean Check(int iNo)
	{
		for(i = 2; i <= (iNo/2); i++)
		{
			if(iNo % i == 0)
			{
				return false;
			}
		}

		
		return true;		
	}
}