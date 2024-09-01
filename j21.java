class j21
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
  
           try { Thread.sleep(1000);} catch (Exception e) {}  
          
           synchronized (s1) {  
            System.out.println("Thread 1: s2");  
           }
          }  
          
      }  
    };  

     Thread t2 =new Thread()
    {
public void run() {  
          synchronized (s1) {  
           System.out.println("Thread 2: s2");  
  
           try { Thread.sleep(100);} catch (Exception e) {}  
  
           synchronized (s1) {  
            System.out.println("Thread 2: s1");  
           }  
         }  
      }  
    };  
    t1.start();
    t2.start();
}

}