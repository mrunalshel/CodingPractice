#include<iostream>
using namespace std;

string fun()
{
 char arr[80]={"rttrrr"};
char ch='A';
char in[70]={'\0'};
int y=0,z=1,icnt=0;
while(ch!='z'+1)
{
icnt=0;
for(int i=0;i<70;i++)
{

    if(arr[i]==ch)
    {
        icnt++;
        
    }

    
}

if(icnt>=1)
{
in[y]=ch;
in[z]=icnt+'0';

        y=y+2;
        z=z+2;
}

        ch++;
}
   

   return in;
}



int main()
{
cout<<fun();
return 0;
}