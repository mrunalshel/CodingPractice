package factoryPatern;
import java.util.ArrayList;
abstract public class pizza
{
    
    
    string name;
    string dough;
    string sauce;
    ArrayList<string>toppings=new ArrayList<string>();
    public void prepare()
    {
        System.out.println("preparing"+name);
    }
    
     public void bake()
    {
        System.out.println("bake",+name);
    }
    
     public void cut()
    {
        System.out.println("cutting",+name);
    }
    
    public string tostring()
    {
        
        stringBuffer display=new StringBuffer();
        display.append(name);
        display.append(sauce);
        for(int i=0;i<size();i++)
        {
            
            display.append(String)toppings.get(i);
        }
        
        return display.tostring();
        
        
        
        
        
    }
}