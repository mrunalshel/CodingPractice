import java.io.*;
class gg
{
public void fun(String fir)throws Exception
{
File fobj=new File("nov.txt");
if(fobj.createNewFile())
{
System.out.println("success");
}
FileWriter ff=new FileWriter("fi.txt");
ff.write("hiiii");


}
}


class j10
{
public static void main(String args[])throws Exception
{
String fi="ttt";
gg obj=new gg();
obj.fun(fi);




}

}

