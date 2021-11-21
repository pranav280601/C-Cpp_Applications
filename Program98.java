//String creation using OOP

import java.util.*;

class Program98
{
	public static void main(String arg[])
	{
		
		String str1;
		int iRet =0;

		/*StringX obj = new StringX();
		obj.Accept();
		obj.Display();*/

		CountVowel obj = new CountVowel();
		obj.Accept();
		obj.Display();
		iRet = obj.CountV();
		System.out.println("Number of vowels are:"+iRet);
	}
}

class StringX
{
	public String str1;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter your name:");
		str1 = sobj.nextLine();		
	}

	public void Display()
	{
		System.out.println("Welcome "+str1);
	}
}

class CountVowel extends StringX
{
	public int iCount;
	public char Arr[];
	public int i;

	CountVowel()
	{
		i = 0;	
		iCount = 0;
	}

	public int CountV()
	{
		char Arr[] = str1.toCharArray();
		while(i<Arr.length)
		{
			if((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u') || (Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') || (Arr[i] == 'U'))
			{
				iCount++;																														
			}
			i++;
		}
		return iCount;
	}
}