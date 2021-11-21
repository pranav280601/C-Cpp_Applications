import java.util.Scanner;

class Program90
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iNo = 0;

		System.out.println("Enter the size of array");
		iNo = sobj.nextInt();

		int Arr[] = new int[iNo];

		for(int i = 0; i < Arr.length; i++)
		{
			System.out.println("Enter element :"+(i+1)+":");
			Arr[i] = sobj.nextInt();
		}

		for(int i = 0; i < Arr.length; i++)
		{
			System.out.println("Elements are:" +Arr[i]);
		}
	}
}