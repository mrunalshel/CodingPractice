class table
{
synchronized void pri()
{
    for(int i=0;i<=5;i++)
    {
        System.out.println(i*5);
    }
}

}

class f1 extends Thread 
{

table t;
f1(table t)
{
    this.t=t;
}
public void run()
{
t.pri();
}

}

class f2 extends Thread 
{

table t;
f2(table t)
{
    this.t=t;
}
public void run()
{
t.pri();
}

}
class f12
{
 public static void main(String arg[])
    {
table obj=new table();
f1 tas=new f1(obj);//1 no class
f2 tas1=new f2(obj);//2 no class
tas1.start();
tas.start();

    }
}