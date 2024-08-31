#include<iostream>
using namespace std;
int main()
{
    int i=903,p=0;
    int arr[30]={0};
    while(i>0)
    {
        int d=i%10;
        arr[p]=d;//p arr cya len paryant jaeel
        p++;
        i=i/10;
    }
   /*    0 1 2  len=3
              0 already check zala aani 3 nahiche    */
int min=arr[0],y=0;

   while(y!=p)
   {
if(min>arr[y])
{
    min=arr[y];
}
y++;
   }
     cout<<min;
    return 0;
}