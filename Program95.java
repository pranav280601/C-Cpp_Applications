// wap to accept string from user

import java.util.*;

class Program95
{
	public static void main(String arg[])
	{
		String str1;

		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter your name:");

		str1 = sobj.nextLine();
		
		System.out.println("Hello "+str1);

	}


}