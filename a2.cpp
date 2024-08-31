#include<iostream>
using namespace std;
int fun(char arr[])
{
int alpha=0,digitval=0,capital=0;
char *p;
p=arr;
for(int i=0;i<10;i++)
{

if((*p>='a')&&(*p<='z'))
{
alpha++;
}

else if((*p>=0)&&(*p<=9))
{
digitval++;
}


else if((*p>='A')&&(*p<='Z'))
{
capital++;
}

p++;

}

if((alpha>=4)&&(capital>=1)&&(digitval>=1))
{
return 1;
}

else
{

return -1;
}


}
int main()
{

char arr[70]={0};
for(int i=0;i<10;i++)
{
    cin>>arr[i];
}
int ans=fun(arr);
if (ans==1)
{
cout<<true;
}
else
{
cout<<false;
}
return 0;
}