class table
{
synchronized void pri()
{
    for(int i=0;i<=5;i++)
    {
        try
    {
    Thread.sleep(1000);
    }
    catch(Exception e)
    {
        System.out.println(e);
    }

    System.out.println(i*5);
    }
}

}
class f15
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