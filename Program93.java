import java.util.*;
import MarvellousNumbers.ArrayX;


class Program93
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;
		int iNo = 0;

		System.out.println("Enter the size of array:");
		iNo = sobj.nextInt();

		Addition aobj = new Addition(iNo);
		aobj.Accept();
		aobj.Display();
		iRet = obj.Add();
		System.out.println("Addition is:"+iRet);

	}
}

class Addition extends ArrayX
{
	public Addition(int iValue)
	{
		super(iValue);
	}
	public int Add()
	{
		for (int  i = 0; i < iNo; i++) 
		{
			iAdd = iAdd + Arr[i];	
		}
	return iAdd;
	}
}