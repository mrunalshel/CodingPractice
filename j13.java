// To find maximum number in array
import java.util.*;
class answer
{
public int find(int arr[])
{
int max=arr[0];
for(int i=0;i<arr.length;i++)
{
if(max<arr[i])
{
max=arr[i];
}
}
return max;
}
}
class j13
{
public static void main(String args[])
{
int isize=0;
Scanner sobj=new Scanner(System.in);
System.out.println("Enter size of array");
isize=sobj.nextInt();
int arr[]=new int[isize];
for(int i=0;i<isize;i++)
{
System.out.println("Enter no in the array");
arr[i]=sobj.nextInt();
}

answer aobj=new answer();
int ians=aobj.find(arr);
System.out.print("Maximum no in array is  ");
System.out.print(ians);

}
}