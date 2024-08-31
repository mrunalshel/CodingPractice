//pattern printing//
#include<iostream>
using namespace std;
int main()
{
char ch[]="mrunal";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(i>=j)
{
cout<<ch[j];
cout<<" ";
}

}
cout<<"\n";
}
}
