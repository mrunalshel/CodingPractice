//reverse string code
import java.util.*;
public class s6
{
    public static void main (String args[])
    {
        
        Scanner sobj=new Scanner(System.in);
    String  s=sobj.nextLine();
     String fina="";
     char ch[]=s.toCharArray();
for(int i=0;i<ch.length;i++)
{
  fina=ch[i]+fina;
  
}
      System.out.println(fina);
    }
}