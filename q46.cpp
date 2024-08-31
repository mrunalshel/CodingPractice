#include<iostream>
using namespace std;
int main()
{
    int ino=9822121,i=0;
    int arr[7]={0};
    int tay=0;
    /* aadi ek array mdhe sgle no gola krte nantrr assending order mdhe sort krte
    9 8 7
    ino=9*10+8
    ino=98*10+7  */

    while(ino>0)
    {
        int d=ino%10;
        arr[i]=d;   //yat no gola krayxche i legth paryant janar 
        ino=ino/10;
        i++;
    }

   //array sort krte aata   1  3 4 
   for(int j=0;j<i;j++)
   {
    for(int k=j;k<i;k++)
    {
        if(arr[j]>arr[k])
        {
            int temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
        }

    }
    }
cout<<"hii";
    
cout<<arr[0];
cout<<arr[1];
cout<<arr[2];
cout<<arr[3];
cout<<arr[4];
cout<<arr[5];
cout<<arr[6];
cout<<arr[7];
cout<<"hii";

   //last step for no form  
  /*ino=9*10+8
    ino=98*10+7  9822 */
//arr mdhe no ahet
   int y=0,read=0;
   while(i>0)
   {
    int d=arr[y];
read=read*10+d;
i--;
   }

  
}

