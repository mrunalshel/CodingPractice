
public interface fun
{
void hee();
}

class c implements fun
{
void hee()
{
System.out.println("successs");
}
}




class a2
{
public static void main(String arg[])
{
c obj=new c();
c.hee();
}
}