import java.lang.*;
import java.util.*;
class s4
{
void fun(int ino)
{
for(int i=0;i<ino;i++)
{
if((i%2==0)&&(i%ino==0))
{
System.out.println(i);
}
}

}
}
class s3
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
int ino=sobj.nextInt();
s4 soj=new s4();
soj.fun(ino);

}

}