#include<iostream>
using namespace std;
int main()
{
   //5
   string st={"uil"};
   int i=st.length()-1;//ithun initialsie krne string ft
   string ft;

   for(int j=0;j<st.length();j++)
   {


    ft[i]=st[j];
    i--;
   }
   int sp=90;
   for(int h=0;h<st.length();h++)
   {
    if(ft[h]!=st[h])
    {
sp=100;
    }
   }

   if(sp==100)
   {
    cout<<"not";
   }

   else{
    cout<<"yes";
   }
return 0;
}