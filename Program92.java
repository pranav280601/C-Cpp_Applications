
//wap to create array and display add N numbers using OOP

import java.util.Scanner;

class Program92
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;
		int iNo = 0;

		System.out.println("Enter the size of array:");
		iNo = sobj.nextInt();

		Array obj = new Array(iNo);
		obj.Accept();
		iRet = obj.Add();
		System.out.println("Addition is:"+iRet);

	}
}

class Array
{
	public int Arr[],iNo,iAdd;

	Array(int iNum)
	{
		iAdd = 0;
		iNo = iNum;
		Arr = new int[iNum];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		for(int i = 0; i < iNo; i++)
		{
			System.out.println("Enter element :"+i+":");
			Arr[i] = sobj.nextInt();
		}
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