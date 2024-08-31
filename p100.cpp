#include<iostream>
using namespace std;
int main()
{
    string nu={'\0'};   //he lihine null chuk ahe
    string d="hiiii####"; // he pn lihine
   int p=0;

   for(int i=0;i<d.length();i++)
   {
    if(d[i]=='#')
    {
         nu[p]=d[i];  //p mhnje nu chi lenght
         p++;
    }
   }


   for(int i=0;i<d.length();i++)
   {
    if(d[i]!='#')
    {
         nu[p]=d[i];  //p mhnje nu chi lenght
         p++;
    }
   }

   cout<<nu[0];
   cout<<nu[1];
   cout<<nu[2];
   cout<<nu[3];
   cout<<nu[4];
   cout<<nu[5];
   cout<<nu[6];//nust nu lihil trr first # print hot hot fkt
    return 0;
}