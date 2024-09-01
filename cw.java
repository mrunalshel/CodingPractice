import java.util.*;

class per
{
int in1;
String name;
int id;
public per(int ino,String n1,int id2)
{
this.in1=ino;
this.name=n1;
this.id=id2;
}

}
public class cw {
	 public static void main( String[] args )
	    {
	        System.out.println( "Hello World!" );

per obj=new per(11,"mrunal",90);
per obj1=new per(12,"rutuja",91);

per obj2=new per(11,"mrunal",89);
per obj3=new per(12,"rutuja",92);

HashSet <per> perobj=new HashSet<per>();
perobj.add(obj);
perobj.add(obj1);
perobj.add(obj2);
perobj.add(obj3);

for(per f:perobj)
{
System.out.println(f.id);
}


	    }
	
}
