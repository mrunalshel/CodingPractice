import java.io.*;
class des
{
    public static void main(String arg[])
    {
    FileInputStream fm=new FileInputStream("C:/Users/shelk/Documents/f1.java");
    ObjectInputStream om=new ObjectInputStream(fm);
    f1 obj=new f1();
    obj=om.readObject();
    System.out.println(obj.name);
    }
    
}