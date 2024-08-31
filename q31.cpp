#include<iostream>
using namespace std;
char fun ()
{
char ch[90]={'\0'};
    int imod=9;
    char ch1='A'-1;
    int ivadhv=9;
    int ino=35;

    while(imod!=ino) 
    {
        imod++; 
        ch1++;    // hi value aadhi ch vadhte mg fail hota

 ch[ino]=ch1;
 
    }
cout<<ino;
   return ch[35];
}
int main()
{
char  ch=fun();
cout<<ch;
return 0;
}