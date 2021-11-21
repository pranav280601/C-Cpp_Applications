//wap to check whether string is palindrome or not

import java.util.*; 
class Program100
{
   public static void main(String Args[])
   {
      StringDemo sobj=new StringDemo();
      sobj.Accept();
      sobj.Display();
     boolean bRet;
     bRet=sobj.CheckPalindrome();
     if(bRet==true)
     {
      System.out.println("String is Palindrome");
     }
     else
     {
      System.out.println("String is not Palindrome");
     }
   }
}

class StringX
{
  public String str;
  public void Accept()
  {
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the string:");
    str = sobj.nextLine();
  }

  public void Display()
  {
    System.out.println("String is:"+str);
   }
}

class StringDemo extends StringX
{ 
    public Boolean CheckPalindrome()
    {
      int iCount = 0;
      char Arr[] = str.toCharArray();
      char Arr2[] = str.toCharArray();
      
      int iEnd = Arr.length-1;
      int iStart = 0;
      char temp;


      while(iStart < iEnd)
      {
        if(Arr[iEnd] == Arr[iStart])
        {
          iCount++;
        }
        iStart++;
        iEnd--;
      }

      if(iCount == (Arr.length/2))
      {
        return true;
      }

      return false;
    }

}