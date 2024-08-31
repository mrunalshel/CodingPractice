#include<iostream>
using namespace std;
int main()
{
    
   int arr[5]={1,2,3,4,6};
   int ahe=0;
   int brr[5]={0};
   /* 3 4 1 2    2 pasun chage krne 2 pasun len paryant jane sgle pudh ghene
   tyannantr bakiche mag takne due=sra lopp laun */

int u=0;//brr chya len paryant jaeel

   for(int i=2;i<5;i++)
   {
brr[u]=arr[i];
u++;
   }

int g=u;
for(int i=0;i<2;i++)
   {
brr[g]=arr[i];
g++;
   }



for(int i=0;i<5;i++)
   {
cout<<brr[i];
cout<<" ";

   }


return 0;
}