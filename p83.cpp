#include<iostream>

using namespace std;


int main()
{
int arr[6]={12,34,5,6,4,13};
int imineven=arr[0],secodd=0;
int iminodd=arr[1],seceven=0;
 
 for(int i=0;i<5;i++)
 {
    

    if((arr[i]<imineven)&&(i%2==0))
    {
        imineven=arr[i];
    }


    
   else if((arr[i]<iminodd)&&(i%2!=0))
    {
        iminodd=arr[i];
    }
 }


 for(int i=0;i<6;i++)
 {
if((i%2==0)&&(arr[i]!=imineven))
    {
        seceven=arr[i];
        if(seceven>arr[i])
        {
            seceven=arr[i];
        }
    }



 }
cout<<seceven;
//cout<<imineven;

}