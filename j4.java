class gg implements Runnable
{
public  void run( )
{
System.out.println("hiii");
System.out.println("hiii");
System.out.println("hello");
System.out.println("hello");
}
public void disp()
{
System.out.println("no");
}
}
class j4
{
public static void main(String args[])throws Exception
{
int ino=90;
gg obj=new gg();
Thread  t1=new Thread(obj);
Thread t2=new Thread(obj);
t1.start();
t1.join();
t2.start();
}

}