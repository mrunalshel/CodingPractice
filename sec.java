class fir
{
public fir()
{
try
{
int a=10/0;
}

catch(Exception obj)
{
System.out.println("occured");
}
}
}

class sec
{
public static void main(String arg[])
{
fir obj=new fir();

}

}