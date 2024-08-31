#include<iostream>
using namespace std;
int main()
{
    

    char arr[20]={"1C0C1C1A0B1"};
char  ans=arr[0]+'0';
    for(int i=0;i<11;i++)
    {

        
           
        if(arr[i]=='A')
        {
            ans=((ans&(arr[i+1]+'0')));

        }


         else if(arr[i]=='B')
        {
            ans=((ans|(arr[i+1]+'0')));

        }


         else if(arr[i]=='C')
        {
            ans=((ans^(arr[i+1]+'0')));

        }
    }
     

     cout<<ans;
     return 0;
    }


       


