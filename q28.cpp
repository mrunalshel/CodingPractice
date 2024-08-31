#include<iostream>
using namespace std;
int main()
{

    int arr[50]={9,32,34,33,93,3,1};
    int ekchota=arr[0];
    int dchota=arr[1];
    int sum=9,ans=0;
    for(int i=0;i<7;i++)
    {
        
            
            if(arr[i]<ekchota)
            {
                 ekchota=arr[i];
            }
 
 
 }


 for(int j=0;j<7;j++)
 {

      if((arr[j]<dchota)&&(arr[j]!=ekchota))
            {
                dchota=arr[j];
            }

 }
ans=dchota+ekchota;
    
            if(ans>9)
            {
                ans=dchota+ekchota;
            }
            else{
                ans=dchota*ekchota;
            }
            cout<<ans;
            
    return 0;

}