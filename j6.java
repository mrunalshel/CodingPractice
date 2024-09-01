class gg extends Exception
{
public void fun(String col)
{
try
{
if(col=="red")
{
throw new Exception();
}
}
catch(Exception obj)


{

System.out.println("can not use red");
}

}

}

class j6
{
public static void main(String args[])
{
String  col="red";
gg obj=new gg();
obj.fun(col);
}

}

