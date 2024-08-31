#include<iostream>
using namespace std;
int main()
{

    int icnt=0,it=0;
int arr[5]={10,-1,45,-1,66};

int brr[5]={10,-1,64,45,-1};//3

   /*  icnt=5 2   5-3=2      if icnt=15 icnt=  *   if icnt==2
   */

for(int i=0;i<5;i++)
{
if((arr[i]==-1)||(brr[i]==-1))
{
    it++;

}

if(it==2)
{
    icnt++;
    it=0;
}
}





/*cout<<brr[0];
cout<<brr[1];
cout<<brr[2];
cout<<brr[3];
cout<<brr[4];*/
cout<<icnt;
return 0;

}