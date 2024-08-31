#include<iostream>
using namespace std;
int main()
{
    int ino=17,evenc=0,odd=0;
    
    int imax2=0;
    
    int max=0;
 int arr[30]={0,1,2,4,1,16,32};
    int brr[30]={0};
     int trr[30]={0};
for(int i=0;i<8;i++)
{
if((i%2)==0)
{
   brr[evenc]=arr[i];
   evenc++;
}

else{

   trr[odd]=arr[i];
   odd++;
}
}

for(int i=0;i<evenc;i++)
{
 max=brr[0];
    if((max)>(brr[i]))
    {
    max=brr[i];
    }

    
}


    
    
    if((brr[0]!=max))
    {
        imax2=brr[0];

         }

         else{
            imax2=brr[2];

         }

         for(int c=0;c<evenc;c++)
         {
            if((brr[c]<imax2)&&(brr[c]!=max))
            {
                imax2=brr[c];
            }
         }
    


cout<<imax2;
return 0;
}