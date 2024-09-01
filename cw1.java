import java.util.*;
class per1
{
int in1;
String name;
int id;
public per1(int ino,String n1,int id2)
{
this.in1=ino;
this.name=n1;
this.id=id2;
}

}

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
public class cw1{
	 public static void main( String[] args )
	    {
	        System.out.println( "Hello World!" );

per obj=new per(11,"mrunal",90);
per obj1=new per(12,"rutuja",91);

per obj2=new per(15,"mrunal",89);
per obj3=new per(14,"rutuja",92);

HashSet <per> perobj=new HashSet<per>();
perobj.add(obj);
perobj.add(obj1);
perobj.add(obj2);
perobj.add(obj3);


HashSet <per1> perobj1=new HashSet<per1>();
int i=0;
for(per f:perobj)
{
    
    while(i!=90)
    {

if(f.id==i)
{

    per1 obj5=new per1(f.in1,f.name,f.id);
    perobj1.add(obj5);
System.out.println(f.in1);

}
i++;
    }

}


	    }
	
}
