import java.util.*;
import MarvellousNumbers.ArrayX;

class P94
{
	public static void main(String[] args)
	{
		Scanner sobj= new Scanner(System.in);
		int iLength=0;
		float fRet=0.0f;
		System.out.println("Enter Number of elements:");
		iLength=sobj.nextInt();
		Average aobj= new Average(iLength);
		aobj.Accept();
		aobj.Display();
		fRet=aobj.Avg();
		System.out.println("Average is:"+fRet);
	}
}

class Average extends ArrayX
{
	public  float Avg(int iValue)
	{
    super(iValue);
	}
	public int Add()
	{
	  int iSum=0,iCnt=0;
	   for(iCnt=0;iCnt<Arr.length;iCnt++)
    	{
    	  iSum=iSum+Arr[iCnt];	
    	}
    	return(iSum/Arr.length);
	}
}