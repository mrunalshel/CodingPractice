//anagram string code
import java.util.*;
public class s7
{
    public static void main (String args[])
    {
      
String m1="munty";
String m2="nuaau";
m1="hhh";
char ch[]=m1.toCharArray();
char bh[]=m2.toCharArray();
Arrays.sort(bh);

for(int i=0;i<ch.length;i++)
{
for(int j=i;j<ch.length;j++)
{

if(ch[i]>ch[j])//mrunal
{
char fin=ch[i];
ch[i]=ch[j];
ch[j]=fin;
}//if end

}

}

System.out.println(bh[0]);

System.out.println(bh[1]);


System.out.println(m1); 
    }//fun end
}//class end