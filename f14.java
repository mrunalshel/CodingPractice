class table
{
    
 public void pri()
 {
    synchronized(this)
    {
    for(int i=0;i<=5;i++)
    {
        System.out.println(i*5);
    }
    }
    for(int i=0;i<=5;i++)
    {
        System.out.println("hiii");
    }
    }
 }
class f14
{
 public static void main(String arg[])
    {
table obj=new table();
f1 tas=new f1(obj);//1 no class
f1 tas1=new f1(obj);//1 no class
tas1.start();
tas.start();

    }
}