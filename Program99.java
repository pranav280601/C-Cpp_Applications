//Reverse strin using toStringf method
import java.util.*;

class Program99
{
   public static void main(String Args[])
   {
      StringDemo sobj=new StringDemo();
      sobj.Accept();
      sobj.Display();
      String s=sobj.ReverseX();
      System.out.println("Reversed String is:"+s);
   }
}

class StringX
{
   public String str;
   public void Accept()
   {
      Scanner sobj= new Scanner(System.in);
      System.out.println("Enter String:");
      str=sobj.nextLine();
   }
   public void Display()
   {
      System.out.println("Entered String is:"+str);
   }
}

class StringDemo extends StringX
{
  public String ReverseX()
  {
    char Arr[]=str.toCharArray();
    int iStart=0,iEnd=Arr.length-1;//Arr.length-1 (5 letters so arr index=5-1 )
    char temp;
    while(iStart<iEnd)
    {
      temp=Arr[iStart];
      Arr[iStart]=Arr[iEnd];
      Arr[iEnd]=temp;
      iStart++;
      iEnd--;
    }
    return Arrays.toString(Arr);
  }
}
//error