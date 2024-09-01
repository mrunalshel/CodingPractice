class table
{
 void pri()
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


class f13
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