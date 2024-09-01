class j22
{
public static void main(String arg[])
{
    final String s1="hii";
    final String s2="hiihhh";
    Thread t1 =new Thread()
    {
public void run()
{
    
          synchronized (s1) {  
           System.out.println("Thread 1: s1");  
  
           try { Thread.sleep(100);} catch (Exception e) {}  
          
           synchronized (s2) {  
            System.out.println("Thread 1: s2");  
           }
          }  
          
      }  
    };  

    
    t1.start();
}

}