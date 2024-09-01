import java.util.*;
class ans
{
public int fin(int ino)
{
int mod=0;
for(int i=1;i<ino;i++)
{
if(ino%i==0)
{
mod=mod+i;
}
}
return mod;
}

}

class d4
{
public static void main(String args[])
{
System.out.println("enter no");
Scanner sobj=new Scanner(System.in);
int no=sobj.nextInt();
 ans obj=new ans();
int uttar=obj.fin(no);
System.out.println(uttar);
}

}