#include<iostream>
using namespace std;
int main()
{
   int arr[20]={"0C1"};
char ans=arr[0];
   for(int i=0;i<2;i++)
   {
    
        if(arr[i]=='A')
        {
        
   ans=(ans&&(arr[i+1]));
        }
       else if(arr[i]=='B')
        {
            
        ans=ans||(arr[i+1]);
        }

        else if(arr[i]=='C')
        {
            
       ans=(arr[i+1])^ans;
        }
    
   }
    cout<<ans;
    return 0;
    }
   