import java.util.*;
import java.lang.*;
class hel
{
public static void main(String args[])
{
int arr[][]=new int[2][2];

Scanner sobj=new Scanner(System.in);
System.out.println("enter array");
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{

arr[i][j]=sobj.nextInt();
}
}


for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{

System.out.println(arr[i][j]);
}
}
}
}