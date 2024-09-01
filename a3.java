class a
{
public void fun()
{
System.out.println("aaaaaaaaaaa");
}
}

class b extends a
{
public void fun()
{
System.out.println("bbbbbbbbbbbbb");
}

public void gun()
{
System.out.println("ggggg");
}

}
class a3
{
public static void main(String args[])
{
a obj=new b();
b bbj=new b ();
obj.fun(); //bbbbbb
bbj.fun(); //bbbbbb

obj.gun(); //gggg
bbj.gun(); //ggg
}

}