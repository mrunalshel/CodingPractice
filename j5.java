class gg extends Exception
{
public void fun()
{
int i=90;

try
{
int j=i/90;

if(j>3)
{
throw new Exception();
}
}
catch(Exception obj)
{
System.out.println("occured");
}

}

}

class j5
{
public static void main(String args[])
{
int ino=90;
gg obj=new gg();
obj.fun();
}

}

