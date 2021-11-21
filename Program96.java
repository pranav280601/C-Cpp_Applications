//accept string from user and pass it from one function to another

import java.util.*;

class Program96
{
	public static void main(String arg[])
	{
		String str1;

		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter your name:");
		str1 = sobj.nextLine();

		StringX obj = new StringX();
		obj.DisplayString(str1);
		
	}
}

class StringX
{
	public void DisplayString(String str2)
	{
		System.out.println("Welcome "+str2);
	}
}