import java.lang.*;
class jj extends Exception
{
try
{
int no=5/0;
}

catch(Exception obj)
{
System.out.println("occured");
}
}
class dec
{
public static void main(String arg[]){
jj obj=new jj();

}
}