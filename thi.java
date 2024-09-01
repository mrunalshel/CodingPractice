

interface gun
{
void dun();
}

class sen implements gun
{
public void dun()  //should be declared public
{
System.out.println("hiiiiii");
}

}

class thi
{
public static void main(String args[])
{
sen obj=new sen();
obj.dun();

}

}