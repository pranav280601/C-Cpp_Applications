
//wap to create array and display add N numbers using OOP
import java.util.*;
class Program91
{
	public static void main(String[] args)
	{
		int iSize=0,iCnt=0;
		Scanner sobj= new Scanner(System.in);
		System.out.println("Enter number of elements:");
		iSize= sobj.nextInt();
		int Arr[]=new int[iSize];//Arr=(int*)malloc (sizeof(int)*iSize in c++
		System.out.println("Enter numbers:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)//for(iCnt=0;iCnt<iSize;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
			//scanf("d",&Arr[iCnt]); in C
		}
		Addition aobj=new Addition();
		//in java there is only call by value
		iRet=aobj.Add(Arr);//in C Arr is base address but in java its not same
		//iRet=Add(Arr,iSize);
		System.out.println("Addition is:"+iRet);
	}
}

class  Addition
{
 public int Add(int Brr[])
 {
   int iSum=0,iCnt=0;
   for(iCnt=0;iCnt<Brr.length;iCnt++)
   {
   	iSum=iSum+Brr[iCnt];
   }
   return iSum;
 }
}