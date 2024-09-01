

class f6
{
  Syncronized void show()
    {
        try
        {
        for(int i=0;i<=4;i++)
        {
        System.out.println(i*5);
        }
        }

        catch(exception e)
        {
            System.out.println("gggg");
        }
    }


}



class f9
{

public static void main(String arg[])
{
int a=8;
    f6 obj=new f6();
    f6 obj1=new f6();
    obj.start();
    obj1.start();
    
}

}