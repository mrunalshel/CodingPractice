#include<iostream>
using namespace std;
int main()
{



string nt="hiiii";
char ch[50]={'\0'};
for(int i=0;i<10;i++)
{
ch[i]=nt[i];
}


cout<<ch[0];
cout<<ch[1];
cout<<ch[2];
return 0;
}