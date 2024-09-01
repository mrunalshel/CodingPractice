abstract class fiv
{
public abstract void con();
public void abst()
{
System.out.println("hii");
}
}

class sec extends fiv
{
public void con()
{
System.out.println("hhhhh");
}
}

class fou
{
public static void main(String arg[])
{
sec obj=new sec();
obj.con();
obj.abst();
}
}