#include<iostream>
using namespace std;
int main()
{
    int ino=17;
 int arr[30]={0,1,2,4,8,16,32};
    int brr[30]={0};
for(int i=0;i<8;i++)
{

    
        if(arr[i]==ino)
        {
           brr[i]=arr[i];
           break;

        }
}

for(int j=0;j<16;j++)
{

    int ans=ino-1;
     if((ans+1)==ino)
     {
        brr[1]=1;


        brr[ino-5]=1;
     }
    
}


       
    


cout<<brr[0];
cout<<brr[1];
cout<<brr[2];
cout<<brr[3];
cout<<brr[4];
cout<<brr[5];
cout<<brr[6];
cout<<brr[7];
cout<<brr[8];
return 0;
}